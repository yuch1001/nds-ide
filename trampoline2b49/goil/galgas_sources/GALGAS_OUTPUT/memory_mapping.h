//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'memory_mapping.h'                           *
//                        Generated by version 1.9.7                         *
//                     december 17th, 2009, at 9h55'41"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef memory_mapping_DEFINED
#define memory_mapping_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "goil_env_verification.h"
#include "goil_options.h"
#include "goil_routines.h"
#include "goil_types_root.h"
#include "template_routines.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                          Routine 'generate_mp'                            *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_mp (C_Compiler &,
                                const GGS_root_obj  ,
                                const GGS_string_map  ,
                                GGS_string &,
                                GGS_string &,
                                GGS_string & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                    Routine 'generate_link_script_new'                     *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_link_script_new (C_Compiler &,
                                const GGS_root_obj  ,
                                const GGS_goilTemplateVariableMap   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      Routine 'generate_link_script'                       *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_link_script (C_Compiler &,
                                const GGS_root_obj   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                        Routine 'generate_memmap'                          *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_memmap (C_Compiler &,
                                const GGS_root_obj   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                      Routine 'generate_memmap_new'                        *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_memmap_new (C_Compiler &,
                                const GGS_root_obj  ,
                                const GGS_goilTemplateVariableMap   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                       Routine 'generate_compiler'                         *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_generate_compiler (C_Compiler &,
                                const GGS_root_obj   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

#endif
