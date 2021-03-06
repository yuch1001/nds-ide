//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'goil_obj_event.h'                           *
//                        Generated by version 2.0.0                         *
//                       july 7th, 2010, at 17h16'43"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef goil_obj_event_DEFINED
#define goil_obj_event_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"
#include "goil_lexique.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "goil_options.h"
#include "goil_semantics.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                 Parser class goil_obj_event declaration                   *
//                                                                           *
//---------------------------------------------------------------------------*

class goil_obj_event {
  public : virtual ~goil_obj_event (void) {}

  protected : virtual void nt_event_ (C_Lexique_goil_5F_lexique &,
                                GGS_event_map  &) = 0 ;

  protected : virtual void nt_event_parse (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual void nt_event_5F_attributes_ (C_Lexique_goil_5F_lexique &,
                                GGS_event_mask_obj  &) = 0 ;

  protected : virtual void nt_event_5F_attributes_parse (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual void nt_description_ (C_Lexique_goil_5F_lexique &,
                                GGS_lstring  &) = 0 ;

  protected : virtual void nt_description_parse (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : void rule_goil_5F_obj_5F_event_event_i0_ (C_Lexique_goil_5F_lexique &,
                                GGS_event_map  &) ;

  protected : void rule_goil_5F_obj_5F_event_event_i0_parse (C_Lexique_goil_5F_lexique & inLexique) ;

  protected : void rule_goil_5F_obj_5F_event_event_5F_attributes_i1_ (C_Lexique_goil_5F_lexique &,
                                GGS_event_mask_obj  &) ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_event_0 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : virtual PMSInt16 select_goil_5F_obj_5F_event_1 (C_Lexique_goil_5F_lexique &) = 0 ;

  protected : void rule_goil_5F_obj_5F_event_event_5F_attributes_i1_parse (C_Lexique_goil_5F_lexique & inLexique) ;

} ;

//---------------------------------------------------------------------------*

#endif
