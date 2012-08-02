//---------------------------------------------------------------------------*
//                                                                           *
//                       File 'template_invocation.h'                        *
//                        Generated by version 2.0.0                         *
//                       july 7th, 2010, at 17h15'58"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef template_invocation_DEFINED
#define template_invocation_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "goil_options.h"
#include "goil_routines.h"
#include "template_semantics.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                     Once function 'allowedFunctions'                      *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_function_descriptorEX kFunction_descriptor_allowedFunctions ;

//---------------------------------------------------------------------------*

GGS_stringset  function_allowedFunctions (C_Compiler & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                          Function 'fullPrefix'                            *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_function_descriptorEX kFunction_descriptor_fullPrefix ;

//---------------------------------------------------------------------------*

GGS_string function_fullPrefix (C_Compiler &,
                                const GGS_goilTemplateVariableMap  ,
                                const GGS_lstring   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      Function 'displayTypeAndValue'                       *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_function_descriptorEX kFunction_descriptor_displayTypeAndValue ;

//---------------------------------------------------------------------------*

GGS_string function_displayTypeAndValue (C_Compiler &,
                                const GGS_goilTemplateType ,
                                const GGS_goilTemplateValue  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                   Routine 'displayTemplateVariableMap'                    *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_displayTemplateVariableMap (C_Compiler &,
                                const GGS_goilTemplateVariableMap   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                        Routine 'displayPathList'                          *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_displayPathList (C_Compiler &,
                                const GGS_stringlist   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      Routine 'findFileInHierarchy'                        *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_findFileInHierarchy (C_Compiler &,
                                const GGS_string ,
                                const GGS_string ,
                                const GGS_string ,
                                GGS_stringlist  &,
                                GGS_bool &,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    Routine 'findAllFilesInHierarchy'                      *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_findAllFilesInHierarchy (C_Compiler &,
                                const GGS_string ,
                                const GGS_string ,
                                const GGS_string ,
                                GGS_stringlist  &,
                                GGS_stringlist  & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                       Routine 'findFileInPathList'                        *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_findFileInPathList (C_Compiler &,
                                const GGS_string ,
                                const GGS_stringlist  ,
                                const GGS_string ,
                                GGS_stringlist  &,
                                GGS_bool &,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     Routine 'findAllFilesInPathList'                      *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_findAllFilesInPathList (C_Compiler &,
                                const GGS_string ,
                                const GGS_stringlist  ,
                                const GGS_string ,
                                GGS_stringlist  &,
                                GGS_stringlist  & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     Routine 'goilTemplateInvocation'                      *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_goilTemplateInvocation (C_Compiler &,
                                const GGS_lstring  ,
                                const GGS_string ,
                                const GGS_string ,
                                const GGS_string ,
                                const GGS_bool ,
                                const GGS_goilTemplateVariableMap  ,
                                GGS_string &,
                                GGS_bool & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

#endif
