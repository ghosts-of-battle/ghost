#!/usr/bin/env python3
"""Port the futureAmmo mod into ghost as fa_* addons.

    python tools/port_futureammo.py [--src D:/Git/futureAmmo] [--force]

futureAmmo ships as its own mod under the `ghostfa` prefix. This copies it in
under ghost's prefix so the ammunition travels with the mod that depends on it,
rather than being a second thing a server has to remember to load.

WHAT CHANGES, AND ONLY THIS:

  z\\ghostfa\\addons\\X          ->  z\\ghost\\addons\\fa_X
  #define COMPONENT X           ->  #define COMPONENT fa_X
  the ghostfa main headers      ->  ghost's own main headers
  "ghostfa_Y" in requiredAddons ->  "ghost_fa_Y"

CLASSNAMES ARE NOT TOUCHED. FA_MRAWS_HE448_AB is FA_MRAWS_HE448_AB in both
mods, and ghost's own configs already reference those names - the MAAWS gunner
carries two of them. Renaming them would be a rename of the thing this port
exists to keep.

fa_main IS NOT THE MACRO SOURCE ANY MORE. Every ported addon includes ghost's
script_mod/script_macros instead, so there is one PREFIX, one version number
and one author string in the built mod. fa_main survives as an ordinary addon
carrying futureAmmo's own functions, data and stringtable.

SETTING_OVERRIDE_HOOK is the one macro futureAmmo defines that ghost does not;
it is re-declared in the ported fa_main and the three users are pointed at it.
"""
import argparse
import io
import os
import re
import shutil
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
ADDONS = os.path.join(ROOT, "addons")
B = chr(92)

TEXT_EXT = {".cpp", ".hpp", ".sqf", ".inc", ".xml", ".txt", ".ext", ""}


def is_text(path):
    return os.path.splitext(path)[1].lower() in TEXT_EXT


def port_text(s, name):
    # paths
    s = s.replace("z" + B + "ghostfa" + B + "addons" + B + "main",
                  "z" + B + "ghost" + B + "addons" + B + "fa_main")
    s = s.replace("z" + B + "ghostfa" + B + "addons" + B,
                  "z" + B + "ghost" + B + "addons" + B + "fa_")
    # CfgPatches dependency names
    s = re.sub(r'"ghostfa_([a-z0-9_]+)"', r'"ghost_fa_\1"', s)
    # This addon's component name. \s* before the line end, because these files
    # are CRLF and `$` in a multiline match sits before the \n with the \r still
    # in the way - which silently matched nothing on the first run.
    s = re.sub(r"^#define COMPONENT (\w+)\s*$", r"#define COMPONENT fa_\1", s, flags=re.M)

    # fa_main stops being a prefix of its own: ONE PREFIX in the built mod, so
    # CfgPatches comes out ghost_fa_x rather than ghostfa_fa_x.
    s = s.replace("#define PREFIX ghostfa", "#define PREFIX ghost")
    s = s.replace('#define QPREFIX "ghostfa"', '#define QPREFIX "ghost"')

    # ...and one version number, ghost's, so a ported PBO reports the build it
    # actually shipped in rather than futureAmmo's own.
    s = s.replace('#include "script_version.hpp"',
                  '#include "' + B + "z" + B + "ghost" + B + "addons" + B + "main" + B +
                  'script_version.hpp"')
    # futureAmmo's own main, where an addon reaches for it
    s = s.replace("EFUNC(main,", "EFUNC(fa_main,")
    s = s.replace("QEFUNC(main,", "QEFUNC(fa_main,")
    s = s.replace("EGVAR(main,", "EGVAR(fa_main,")
    s = s.replace("QEGVAR(main,", "QEGVAR(fa_main,")
    return s


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--src", default=r"D:\Git\futureAmmo")
    ap.add_argument("--force", action="store_true")
    args = ap.parse_args()

    src_addons = os.path.join(args.src, "addons")
    if not os.path.isdir(src_addons):
        print("no %s" % src_addons)
        return 1

    made = skipped = 0
    for name in sorted(os.listdir(src_addons)):
        s_dir = os.path.join(src_addons, name)
        if not os.path.isdir(s_dir):
            continue
        d_dir = os.path.join(ADDONS, "fa_" + name)

        if os.path.isdir(d_dir):
            if not args.force:
                skipped += 1
                continue
            shutil.rmtree(d_dir)

        shutil.copytree(s_dir, d_dir)

        for base, _, files in os.walk(d_dir):
            for f in files:
                p = os.path.join(base, f)
                if f == "$PBOPREFIX$":
                    io.open(p, "w", encoding="utf-8", newline="").write(
                        "z" + B + "ghost" + B + "addons" + B + "fa_" + name + "\r\n")
                    continue
                if not is_text(p):
                    continue
                try:
                    txt = io.open(p, encoding="utf-8", newline="").read()
                except (OSError, UnicodeDecodeError):
                    continue
                io.open(p, "w", encoding="utf-8", newline="").write(port_text(txt, name))

        made += 1
        print("  fa_%-22s ported" % name)

    print("")
    print("%d addon(s) ported, %d already present" % (made, skipped))
    if skipped:
        print("re-run with --force to overwrite the ones already there")
    return 0


if __name__ == "__main__":
    sys.exit(main())
