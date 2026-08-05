"""Generate every ghost app icon (white on transparent, cTab style).

Drawn at 4x and downscaled for smooth edges - the first generation was drawn
at 1x and it showed. One consistent stroke weight throughout, so the set reads
as a family. PIL's ImageDraw writes pixels raw (no blending), which is what
lets a hole be punched with fill=(0,0,0,0).

Run from this folder, then for each png:
    hemtt utils paa convert icon_<name>.png icon_<name>_ca.paa
"""
import math
from PIL import Image, ImageDraw

SS = 4            # supersample factor
S = 256           # final size
Z = S * SS        # canvas size
W = (255, 255, 255, 255)
HOLE = (0, 0, 0, 0)
STROKE = 14 * SS  # the family line weight


def canvas():
    im = Image.new("RGBA", (Z, Z), (0, 0, 0, 0))
    return im, ImageDraw.Draw(im)


def save(im, name):
    im = im.resize((S, S), Image.LANCZOS)
    im.save(rf"O:\GIT\ghost\addons\ctab_s7\data\{name}.png")
    print(name)


def ring(d, cx, cy, r, width):
    d.ellipse([cx - r, cy - r, cx + r, cy + r], outline=W, width=width)


def dot(d, cx, cy, r, fill=W):
    d.ellipse([cx - r, cy - r, cx + r, cy + r], fill=fill)


def rrect(d, box, rad, fill=W):
    d.rounded_rectangle(box, radius=rad, fill=fill)


P = lambda v: v * SS  # 256-space to canvas-space

# --- weather: sun behind a cloud -------------------------------------------
im, d = canvas()
sx, sy, sr = P(170), P(84), P(34)
dot(d, sx, sy, sr)
for i in range(8):
    a = math.radians(i * 45)
    x1 = sx + math.cos(a) * (sr + P(12))
    y1 = sy + math.sin(a) * (sr + P(12))
    x2 = sx + math.cos(a) * (sr + P(30))
    y2 = sy + math.sin(a) * (sr + P(30))
    d.line([x1, y1, x2, y2], fill=W, width=P(10))
dot(d, P(84), P(160), P(38))       # cloud lobes
dot(d, P(128), P(132), P(46))
dot(d, P(172), P(162), P(36))
rrect(d, [P(56), P(158), P(200), P(198)], P(20))
save(im, "icon_weather")

# --- ew / drone: quadcopter seen from above --------------------------------
im, d = canvas()
cx = cy = P(128)
arm = P(58)
rot = P(30)
for ax, ay in ((-1, -1), (1, -1), (-1, 1), (1, 1)):
    ex, ey = cx + ax * arm, cy + ay * arm
    d.line([cx, cy, ex, ey], fill=W, width=P(12))
    ring(d, ex, ey, rot, P(10))
rrect(d, [cx - P(30), cy - P(24), cx + P(30), cy + P(24)], P(16))
dot(d, cx, cy + P(6), P(9), HOLE)   # camera eye punched out
save(im, "icon_ew")

# --- jam: antenna with broken signal and a strike --------------------------
im, d = canvas()
mx = P(118)
d.polygon([(mx - P(7), P(210)), (mx + P(7), P(210)),
           (mx + P(3), P(84)), (mx - P(3), P(84))], fill=W)
dot(d, mx, P(72), P(15))
d.line([mx, P(210), mx - P(42), P(238)], fill=W, width=P(11))
d.line([mx, P(210), mx + P(42), P(238)], fill=W, width=P(11))
for r in (P(38), P(64)):
    d.arc([mx - r, P(72) - r, mx + r, P(72) + r], start=-50, end=50, fill=W, width=P(11))
d.line([P(196), P(26), P(150), P(120)], fill=W, width=P(13))  # the break
save(im, "icon_jam")

# --- mesh: linked nodes ----------------------------------------------------
im, d = canvas()
cx = cy = P(128)
nodes = []
for i in range(3):
    a = math.radians(90 + i * 120)
    nodes.append((cx + math.cos(a) * P(74), cy - math.sin(a) * P(74)))
for nx, ny in nodes:
    d.line([cx, cy, nx, ny], fill=W, width=P(10))
for i in range(3):
    d.line([nodes[i], nodes[(i + 1) % 3]], fill=W, width=P(10))
for nx, ny in nodes:
    dot(d, nx, ny, P(22))
    dot(d, nx, ny, P(9), HOLE)
dot(d, cx, cy, P(18))
save(im, "icon_mesh")

# --- radio: handheld with antenna ------------------------------------------
im, d = canvas()
rrect(d, [P(88), P(76), P(174), P(226)], P(14))
d.line([P(104), P(70), P(104), P(20)], fill=W, width=P(12))   # antenna
dot(d, P(104), P(18), P(8))
for i in range(3):                                            # speaker slits
    y = P(102 + i * 16)
    d.line([P(104), y, P(158), y], fill=W, width=P(6))
# punched screen and knob
d.rounded_rectangle([P(102), P(160), P(160), P(196)], radius=P(6), fill=HOLE)
save(im, "icon_radio")

# --- alarm: bell -----------------------------------------------------------
im, d = canvas()
d.pieslice([P(70), P(66), P(186), P(182)], start=180, end=360, fill=W)
d.rectangle([P(70), P(122), P(186), P(178)], fill=W)
rrect(d, [P(54), P(172), P(202), P(194)], P(10))
dot(d, P(128), P(212), P(16))                                  # clapper
d.line([P(128), P(66), P(128), P(48)], fill=W, width=P(10))    # stem
d.arc([P(28), P(48), P(108), P(128)], start=200, end=250, fill=W, width=P(11))
d.arc([P(148), P(48), P(228), P(128)], start=290, end=340, fill=W, width=P(11))
save(im, "icon_alarm")

# --- settings: gear --------------------------------------------------------
im, d = canvas()
cx = cy = P(128)
teeth = 8
outer, inner, tooth = P(66), P(52), P(88)
pts = []
for i in range(teeth * 2):
    a = math.pi * i / teeth
    r = tooth if i % 2 == 0 else outer
    half = math.pi / (teeth * 2.6)
    for da in (-half, half) if i % 2 == 0 else (0,):
        pts.append((cx + math.cos(a + da) * r, cy + math.sin(a + da) * r))
d.polygon(pts, fill=W)
dot(d, cx, cy, outer)
dot(d, cx, cy, P(26), HOLE)
save(im, "icon_settings")

# --- hack: open padlock ----------------------------------------------------
im, d = canvas()
rrect(d, [P(64), P(118), P(192), P(218)], P(14))
dot(d, P(128), P(156), P(15), HOLE)                            # keyhole
d.polygon([(P(122), P(158)), (P(134), P(158)),
           (P(140), P(196)), (P(116), P(196))], fill=HOLE)
d.arc([P(96), P(30), P(196), P(130)], start=180, end=310, fill=W, width=P(16))
d.line([P(196), P(80), P(196), P(56)], fill=W, width=P(16))    # open shackle
save(im, "icon_hack")

# --- compass: rose ring (the needle rotates over it) -----------------------
im, d = canvas()
cx = cy = P(128)
ring(d, cx, cy, P(106), P(9))
for i in range(8):
    a = math.radians(i * 45)
    r1, w = (P(84), P(9)) if i % 2 == 0 else (P(92), P(6))
    x1, y1 = cx + math.cos(a) * r1, cy + math.sin(a) * r1
    x2, y2 = cx + math.cos(a) * P(100), cy + math.sin(a) * P(100)
    d.line([x1, y1, x2, y2], fill=W, width=w)
d.polygon([(cx, cy - P(122)), (cx - P(10), P(128) - P(100)),
           (cx + P(10), cy - P(100))], fill=W)                 # north mark
save(im, "icon_compass")

# --- needle: rotates about the centre, so it must be symmetric there -------
im, d = canvas()
cx = cy = P(128)
d.polygon([(cx, cy - P(88)), (cx - P(16), cy), (cx + P(16), cy)], fill=W)
d.polygon([(cx, cy + P(88)), (cx - P(16), cy), (cx + P(16), cy)], fill=W)
dot(d, cx, cy, P(12))
dot(d, cx, cy, P(5), HOLE)
save(im, "icon_needle")

print("done")
