// Object classes the cargo loader always refuses, on top of whatever the
// GVAR(objectsToExclude) setting adds. The setting is a comma-separated string,
// so it is split rather than appended directly.
private _toExclude = ["Land_Laptop_02_unfolded_F", "Land_Sun_chair_F"];
_toExclude append ((GVAR(objectsToExclude) splitString ",") apply {trim _x});
_toExclude = _toExclude select {_x != ""};
