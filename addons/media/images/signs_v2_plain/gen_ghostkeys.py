"""Generate ghostkeys.png - the mod-keybind sign - from the existing
keybinds.png as a style template (frame, header, logo kept; content replaced)."""
from PIL import Image, ImageDraw, ImageFont

SRC = r"O:\GIT\ghost\addons\media\images\signs_v2_plain\keybinds.png"
OUT = r"O:\GIT\ghost\addons\media\images\signs_v2_plain\ghostkeys.png"

im = Image.open(SRC).convert("RGB")
d = ImageDraw.Draw(im)

# palette sampled from the template
BG = im.getpixel((120, 500))
CREAM = (242, 233, 216)
ORANGE = (232, 84, 47)
MUTED = (201, 185, 166)

def F(name, size):
    return ImageFont.truetype(rf"C:\Windows\Fonts\{name}", size)

f_title = F("arialbd.ttf", 72)
f_sect = F("arialbd.ttf", 46)
f_row = F("arial.ttf", 38)
f_key = F("consolab.ttf", 38)
f_note = F("arial.ttf", 30)

# wipe the old content area (below the rule at ~y330, inside the frame)
d.rectangle([58, 345, 1990, 986], fill=BG)

# retitle: cover "KEYBINDS" and redraw (template title is fine, but make sure
# the subtitle line under the eyebrow says what this sign is)
# -- keep the big KEYBINDS as-is; it is exactly right.

ROW_H = 66

def section(x, y, title):
    d.text((x, y), title, font=f_sect, fill=ORANGE)
    return y + ROW_H + 8

def row(x, y, w, action, key, key_fill=CREAM, note=None):
    d.text((x, y), action, font=f_row, fill=CREAM)
    kw = d.textlength(key, font=f_key)
    d.text((x + w - kw, y), key, font=f_key, fill=key_fill)
    y += ROW_H
    if note:
        d.text((x + 24, y - 14), note, font=f_note, fill=MUTED)
        y += 40
    return y

# left column - Ghosts of Battle
x1, w1 = 120, 880
y = section(x1, 395, "GHOSTS OF BATTLE")
y = row(x1, y, w1, "Send TIC  (whole side)", "Ctrl+Shift+T")
y = row(x1, y, w1, "Vector: Place Target Marker", "Ctrl+Shift+M")
y = row(x1, y, w1, "Signal Scanner", "Ctrl+U")
y = row(x1, y, w1, "Scanner Stopwatch", "Ctrl+Alt+U")
y = row(x1, y, w1, "Scanner Alarm", "Ctrl+Shift+U")
y = row(x1, y, w1, "Clear Scanner Alarms", "UNBOUND - SET IT", ORANGE)
y = row(x1, y, w1, "Point Direction (vehicle)", "ACE finger key")

# right column - View Distance (DTVD)
x2, w2 = 1080, 850
y = section(x2, 395, "VIEW DISTANCE")
y = row(x2, y, w2, "View Distance Menu", "\\")
y = row(x2, y, w2, "Preset 1 / 2 / 3", "Shift/Ctrl/Alt+\\")
y = row(x2, y, w2, "Raise View Distance", "Ctrl+]")
y = row(x2, y, w2, "Lower View Distance", "Ctrl+[")

# footer
foot = "SET IN:  OPTIONS  >  CONTROLS  >  CONFIGURE ADDONS  (CBA)"
fw = d.textlength(foot, font=f_note)
d.text(((2048 - fw) / 2, 925), foot, font=f_note, fill=MUTED)

im.save(OUT)
print("saved", OUT, im.size)
