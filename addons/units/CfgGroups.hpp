class CfgGroups {
  #include "groups\groupDef.hpp"
  #define CLASS_MACRO(unit) USMC(unit)
  GROUP_DEF(WEST,"GHOST: West",w,1)

  #undef CLASS_MACRO
  #define CLASS_MACRO(unit) MSV(unit)
  GROUP_DEF(East,"GHOST: East",e,0)
  
  #undef CLASS_MACRO
  #define CLASS_MACRO(unit) AIR(unit)
  GROUP_DEF(INDEP,"GHOST: Indy",i,2)
};
