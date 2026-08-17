"""Generate the three cTab map-style compat addons (BCE-inspired; BCE source at
O:\\GIT\\Better-CAS-Environment- is the reference for WHICH mods to support):
  compat_ctab_darkmap       - Dark Map ACE       (CfgPatches darkmap_ace_main)
  compat_ctab_enhanced_map  - DIS Enhanced Map   (CfgPatches DIS_enhanced_map)
  compat_ctab_gps           - DIS Enhanced GPS   (CfgPatches DIS_Enhanced_Gps)
Each mirrors the mod's RscMapControl palette onto cTab's standalone
cTab_RscMapControl (which never inherits vanilla RscMapControl patches).
Alphabetical pbo order gives BCE's precedence: dark < map < gps.
Sources are derapified configs in the session scratchpad; rerun after
re-extracting if the mods update. Palettes (c) their authors, APL-SA.
"""
import re, os, sys

SCRATCH = r"C:\Users\jwise\AppData\Local\Temp\claude\o--GIT-ghost\e694c29b-03fc-4244-b4bd-3bfd90640af7\scratchpad"
OUT = r"O:\GIT\ghost\addons"

def extract_block_props(path, start_pat):
    """Depth-1 properties of the class starting at start_pat (nested classes skipped)."""
    lines = open(path, encoding="utf-8", errors="replace").read().splitlines()
    props, depth, started, i = [], 0, False, 0
    while i < len(lines):
        line = lines[i]
        if not started:
            if re.search(start_pat, line):
                started = True
                depth = line.count("{") - line.count("}")
            i += 1
            continue
        d0 = depth
        depth += line.count("{") - line.count("}")
        if depth <= 0:
            break
        s = line.strip()
        if d0 == 1 and re.match(r"^\w+(\[\])?\s*=", s):
            while ";" not in s and i + 1 < len(lines):
                i += 1
                s += " " + lines[i].strip()
                depth += lines[i].count("{") - lines[i].count("}")
            props.append(s)
        i += 1
    return props

def write_addon(name, req, props, source_note):
    d = os.path.join(OUT, name)
    os.makedirs(d, exist_ok=True)
    with open(os.path.join(d, "$PBOPREFIX$"), "w") as f:
        f.write(f"z\\ghost\\addons\\{name}\n")
    comp = name
    with open(os.path.join(d, "script_component.hpp"), "w") as f:
        f.write(f"#define COMPONENT {comp}\n#define COMPONENT_BEAUTIFIED {comp}\n\n"
                "#include \"\\z\\ghost\\addons\\main\\script_mod.hpp\"\n"
                "#include \"\\z\\ghost\\addons\\main\\script_macros.hpp\"\n")
    body = "\n".join(f"    {p}" for p in props)
    with open(os.path.join(d, "config.cpp"), "w") as f:
        f.write(f"""#include "script_component.hpp"

// {source_note}
// cTab's map control is a standalone class, so the source mod's vanilla
// RscMapControl patch never reaches it - this mirrors the palette across.
// Loads only when both cTab and the source mod are present.

class CfgPatches {{
    class ADDON {{
        author = QAUTHOR;
        name = COMPONENT_NAME;
        units[] = {{}};
        weapons[] = {{}};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {{
            "cba_xeh",
            "ghost_main",
            "cTab",
            "{req}"
        }};
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
        authors[] = {{"YonV"}};
    }};
}};

class cTab_RscMapControl {{
{body}
}};
""")
    print(name, len(props), "props")

dis = extract_block_props(os.path.join(SCRATCH, "dis_map", "config.cpp"), r"^class RscMapControl\b")
dark = extract_block_props(os.path.join(SCRATCH, "darkmap", "config.cpp"), r"^class RscMapControl\b")
if not dis or not dark:
    sys.exit("extraction failed")

write_addon("compat_ctab_darkmap", "darkmap_ace_main", dark,
            "Dark Map (ACE) palette on the cTab map. Palette (c) the Dark Map authors, APL-SA.")
write_addon("compat_ctab_enhanced_map", "DIS_enhanced_map", dis,
            "DIS Enhanced Map palette on the cTab map. Palette (c) Hoplite, APL-SA.")
write_addon("compat_ctab_gps", "DIS_Enhanced_Gps", dis,
            "DIS Enhanced GPS: its map palette matches DIS Enhanced Map (same author), mirrored onto the cTab map.")
