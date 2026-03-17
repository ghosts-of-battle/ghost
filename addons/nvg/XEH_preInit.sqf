#include "script_component.hpp"
ADDON = false;
#include "XEH_PREP.hpp"
ADDON = true;

// ACE check
[
  "ghost_nvg_ACE",
  "CHECKBOX",
  ["Use ACE color preset","Enable if using ACE"],
  COMPONENT_NAME,
  false
] call cba_settings_fnc_init;

// NVG effect select
[
  "ghost_nvg_Effect",
  "LIST",
  [
    "NVG Effect",
    "Green Phosphor (no effect).\nModern Warfare (greenish tint WP)\nWhite Phosphor (White Phosphor)"
  ],
  COMPONENT_NAME,
  [
    [
      "",
      "gpEffect",
      "wpEffect",
      "mwEffect",
      "afEffect",
      "ofEffect",
      "rfEffect"
    ],
    [
      "None",
      "Green Phosphor",
      "White Phosphor",
      "Modern Warfare",
      "Amber Filter",
      "Orange Filter",
      "Red Filter"
    ],
    0
  ]
] call cba_settings_fnc_init;

// NVG blacklist
[
  "ghost_nvg_Blacklist",
  "EDITBOX",
  ["Blacklisted NVG classnames", "Separate classnames with commas. Example: className1, className2, className3"],
  COMPONENT_NAME,
  ""
] call cba_settings_fnc_init;
