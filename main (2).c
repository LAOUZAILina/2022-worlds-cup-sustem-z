 /**--------------------------------------------------------**/
  /**       C o n v e r s i o n   Z vers C (Standard)        **/
  /**             Réalisée par Pr D.E ZEGOUR                 **/
  /**             E S I - Alger                              **/
  /**             Copywrite 2014                             **/
  /**--------------------------------------------------------**/

  #include <stdio.h>
  #include <stdlib.h>
  #include <conio.h>

  typedef int bool ;
  typedef char * string255 ;

  #define True 1
  #define False 0

  /** Implémentation **\: TABLEAU DE STRUCTURES**/

  /** Structures statiques **/

  typedef struct Tsiiii Type_Tsiiii  ;
  typedef Type_Tsiiii * Typestr_Tsiiii ;
  typedef string255 Type1_Tsiiii  ;
  typedef int Type2_Tsiiii  ;
  typedef int Type3_Tsiiii  ;
  typedef int Type4_Tsiiii  ;
  typedef int Type5_Tsiiii  ;
  struct Tsiiii
    {
      Type1_Tsiiii Champ1 ;
      Type2_Tsiiii Champ2 ;
      Type3_Tsiiii Champ3 ;
      Type4_Tsiiii Champ4 ;
      Type5_Tsiiii Champ5 ;
    };

  Type1_Tsiiii Struct1_Tsiiii ( Typestr_Tsiiii S)
    {
      return  S->Champ1 ;
    }

  Type2_Tsiiii Struct2_Tsiiii ( Typestr_Tsiiii S)
    {
      return  S->Champ2 ;
    }

  Type3_Tsiiii Struct3_Tsiiii ( Typestr_Tsiiii S)
    {
      return  S->Champ3 ;
    }

  Type4_Tsiiii Struct4_Tsiiii ( Typestr_Tsiiii S)
    {
      return  S->Champ4 ;
    }

  Type5_Tsiiii Struct5_Tsiiii ( Typestr_Tsiiii S)
    {
      return  S->Champ5 ;
    }

  void Aff_struct1_Tsiiii ( Typestr_Tsiiii S, Type1_Tsiiii Val )
    {
      strcpy( S->Champ1 , Val );
    }

  void Aff_struct2_Tsiiii ( Typestr_Tsiiii S, Type2_Tsiiii Val )
    {
       S->Champ2 = Val ;
    }

  void Aff_struct3_Tsiiii ( Typestr_Tsiiii S, Type3_Tsiiii Val )
    {
       S->Champ3 = Val ;
    }

  void Aff_struct4_Tsiiii ( Typestr_Tsiiii S, Type4_Tsiiii Val )
    {
       S->Champ4 = Val ;
    }

  void Aff_struct5_Tsiiii ( Typestr_Tsiiii S, Type5_Tsiiii Val )
    {
       S->Champ5 = Val ;
    }


  /** Tableaux **/

  typedef Typestr_Tsiiii Typeelem_V8_4Tsiiii ;
  typedef Typeelem_V8_4Tsiiii * Typevect_V8_4Tsiiii ;

  Typeelem_V8_4Tsiiii Element_V8_4Tsiiii ( Typevect_V8_4Tsiiii V , int I1 , int I2 )
    {
      return  *(V +  (I1-1)*4 + (I2-1)  ) ;
    }

  void Aff_element_V8_4Tsiiii ( Typevect_V8_4Tsiiii V  , int I1 , int I2,  Typeelem_V8_4Tsiiii Val )
    {
      Typeelem_V8_4Tsiiii _Temp ;
      _Temp = malloc(sizeof(Type_Tsiiii));
      _Temp->Champ1 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
      strcpy(_Temp->Champ1, Val->Champ1);
      _Temp->Champ2 = Val->Champ2;
      _Temp->Champ3 = Val->Champ3;
      _Temp->Champ4 = Val->Champ4;
      _Temp->Champ5 = Val->Champ5;
      Val = _Temp ;
      *(V +  (I1-1)*4 + (I2-1)  ) = Val ;
    }


  /** Implémentation **\: TABLEAU DE LISTES DE ENTIERS**/

  /** Listes lin?aires cha?n?es **/

  typedef int Typeelem_Li   ;
  typedef struct Maillon_Li * Pointeur_Li ;

  struct Maillon_Li
    {
      Typeelem_Li  Val ;
      Pointeur_Li Suiv ;
    } ;

  Pointeur_Li Allouer_Li (Pointeur_Li *P)
    {
      *P = (struct Maillon_Li *) malloc( sizeof( struct Maillon_Li)) ;
      (*P)->Suiv = NULL;
    }

  void Aff_val_Li(Pointeur_Li P, Typeelem_Li Val)
    {
      P->Val = Val ;
    }

  void Aff_adr_Li( Pointeur_Li P,  Pointeur_Li Q)
    {
      P->Suiv = Q ;
    }

  Pointeur_Li Suivant_Li(  Pointeur_Li P)
    { return( P->Suiv ) ;  }

  Typeelem_Li Valeur_Li( Pointeur_Li P)
    { return( P->Val) ; }

  void Liberer_Li ( Pointeur_Li P)
    { free (P);}


  /** Tableaux **/

  typedef Pointeur_Li Typeelem_V8Li ;
  typedef Typeelem_V8Li * Typevect_V8Li ;

  Typeelem_V8Li Element_V8Li ( Typevect_V8Li V , int I1  )
    {
      return  *(V +  (I1-1)  ) ;
    }

  void Aff_element_V8Li ( Typevect_V8Li V  , int I1 ,  Typeelem_V8Li Val )
    {
      *(V +  (I1-1)  ) = Val ;
    }


  /** Implémentation **\: ARBRE BINAIRE DE ENTIERS**/

  /** Arbres de recherche binaire **/

  typedef int Typeelem_Ai   ;
  typedef struct Noeud_Ai * Pointeur_Ai ;

  struct Noeud_Ai
    {
      Typeelem_Ai  Val ;
      Pointeur_Ai Fg ;
      Pointeur_Ai Fd ;
      Pointeur_Ai Pere ;
     } ;

  Typeelem_Ai Info_Ai( Pointeur_Ai P )
    { return P->Val;   }

  Pointeur_Ai Fg_Ai( Pointeur_Ai P)
    { return P->Fg ; }

  Pointeur_Ai Fd_Ai( Pointeur_Ai P)
    { return P->Fd ; }

  Pointeur_Ai Pere_Ai( Pointeur_Ai P)
    { return P->Pere ; }

  void Aff_info_Ai ( Pointeur_Ai P, Typeelem_Ai Val)
    {
       P->Val = Val ;
    }

  void Aff_fg_Ai( Pointeur_Ai P, Pointeur_Ai Q)
    { P->Fg =  Q;  }

  void Aff_fd_Ai( Pointeur_Ai P, Pointeur_Ai Q)
    { P->Fd =  Q ; }

  void Aff_pere_Ai( Pointeur_Ai P, Pointeur_Ai Q)
    { P->Pere =  Q ; }

  void Creernoeud_Ai( Pointeur_Ai *P)
    {
      *P = (struct Noeud_Ai *) malloc( sizeof( struct Noeud_Ai))   ;
      (*P)->Fg = NULL;
      (*P)->Fd = NULL;
      (*P)->Pere = NULL;
    }

  void Liberernoeud_Ai( Pointeur_Ai P)
    { free( P ) ; }


  /** Implémentation **\: TABLEAU DE STRUCTURES**/

  /** Tableaux **/

  typedef Typestr_Tsiiii Typeelem_V2_8Tsiiii ;
  typedef Typeelem_V2_8Tsiiii * Typevect_V2_8Tsiiii ;

  Typeelem_V2_8Tsiiii Element_V2_8Tsiiii ( Typevect_V2_8Tsiiii V , int I1 , int I2 )
    {
      return  *(V +  (I1-1)*8 + (I2-1)  ) ;
    }

  void Aff_element_V2_8Tsiiii ( Typevect_V2_8Tsiiii V  , int I1 , int I2,  Typeelem_V2_8Tsiiii Val )
    {
      Typeelem_V2_8Tsiiii _Temp ;
      _Temp = malloc(sizeof(Type_Tsiiii));
      _Temp->Champ1 = malloc(255 * sizeof(char));
      /* Affectation globale de structure */
      strcpy(_Temp->Champ1, Val->Champ1);
      _Temp->Champ2 = Val->Champ2;
      _Temp->Champ3 = Val->Champ3;
      _Temp->Champ4 = Val->Champ4;
      _Temp->Champ5 = Val->Champ5;
      Val = _Temp ;
      *(V +  (I1-1)*8 + (I2-1)  ) = Val ;
    }

  /** Pour les variables temporaires **/
  typedef Typestr_Tsiiii Typeelem_V32Tsiiii;
  typedef Typeelem_V32Tsiiii Typetab_V32Tsiiii[32];


  /** Implémentation **\: FILE DE ARBRES BINAIRES DE ENTIERS**/
  /** Files d'attente **/

  typedef Pointeur_Ai Typeelem_FAi ;
  typedef  struct Filedattente_FAi * Pointeur_FAi ;
  typedef  struct Maillon_FAi * Ptliste_FAi ;

  struct Maillon_FAi
    {
      Typeelem_FAi Val ;
      Ptliste_FAi Suiv  ;
    };

  struct Filedattente_FAi
    {
      Ptliste_FAi Tete, Queue ;
    };

  void Creerfile_FAi ( Pointeur_FAi *Fil   )
    {
      *Fil = (struct Filedattente_FAi *) malloc( sizeof( struct Filedattente_FAi)) ;
      (*Fil)->Tete = NULL ;
      (*Fil)->Queue = NULL ;
    }

  bool Filevide_FAi (Pointeur_FAi Fil  )
    { return  Fil->Tete == NULL ;}

  void Enfiler_FAi ( Pointeur_FAi Fil , Typeelem_FAi Val   )
    {
      Ptliste_FAi Q;

      Q = (struct Maillon_FAi *) malloc( sizeof( struct Maillon_FAi))   ;
      Q->Val = Val ;
      Q->Suiv = NULL;
      if ( ! Filevide_FAi(Fil) )
        Fil->Queue->Suiv = Q ;
      else Fil->Tete = Q;
        Fil->Queue = Q;
    }

  void Defiler_FAi (Pointeur_FAi Fil, Typeelem_FAi *Val )
    {
      if (! Filevide_FAi(Fil) )
        {
          *Val = Fil->Tete->Val ;
          Fil->Tete =  Fil->Tete->Suiv;
        }
      else printf ("%s \n", "File d'attente vide");
    }


  /** Variables du programme principal **/
  Typevect_V8_4Tsiiii Tableau_des_equipes;
  Typevect_V8Li Tabgroupes;
  Pointeur_Ai Racine=NULL;
  Typevect_V2_8Tsiiii T_pr_dx;
  int _Izw;  /** Variable de contrôle **/

  /** Fonctions standards **/

  int Mod( int a, int b)
    { return ( a % b ); }

  int Aleanombre( int N )
    { return ( rand() % N ); }


  /** Initialisation d'un tableau **/
  void Init_vect_V8_4Tsiiii (  Typevect_V8_4Tsiiii T , Typetab_V32Tsiiii Tab , int N)
    {
      int K=-1;
     int I1 , I2;
     for (I1=0; I1< 8; ++I1)
     for (I2=0; I2< 4; ++I2)
        {
          K++;
         *(T +  I1*4 + I2  ) = Tab [K] ;
        }
    }


  /** Prototypes des fonctions **/

  void Phase1();
  void Initial_t_eq (Typevect_V8_4Tsiiii *Tableau_des_equipes);
  void Tab_lis (Typevect_V8_4Tsiiii *Tab , Typevect_V8Li *Tabgroupes);
  void Affich_rencontres (Typevect_V8_4Tsiiii *Tab , int *Groupe , int *Rencontre , int *Eq1 , int *Eq2);
  void Hasardd (int *Numg , int *Eq1 , int *Eq2 , Typevect_V8_4Tsiiii *Tab);
  void Par_favori (int *Numg , int *Eq1 , int *Eq2 , Typevect_V8_4Tsiiii *Tab);
  void Par_points (int *Numg , int *Eq1 , int *Eq2 , Typevect_V8_4Tsiiii *Tab);
  void Hasard_favori (int *Numg , int *Eq1 , int *Eq2 , Typevect_V8_4Tsiiii *Tab);
  void Menu_choix1();
  void Creer_t_p_d (Typevect_V8_4Tsiiii *Tableau_des_equipes , Typevect_V2_8Tsiiii *T_pr_dx);
  void Creerarbre_phase2();
  void Menu_choix2();
  void Par_favori2 (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant);
  void Par_points2 (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant);
  void Par_resultat_phase1 (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant);
  void Resultatph1_favori2 (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant);
  void Iv (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant);
  void Hasard2 (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant);
  void Ii_iv (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant);

  /**************************************pprogramme principal****************************/
  /*************************************************************************************/
  void Phase1()
    {
      /** Variables locales **/
      int Groupe;
      int Choice;
      int Premiere_equipe;
      int Deuxiemme_equipe;
      int S;
      int Match;
      Pointeur_Li Pointer=NULL;
      Typevect_V2_8Tsiiii T_pr_dx;

      /** Corps du module **/
     T_pr_dx = malloc(2*8 * sizeof(Typestr_Tsiiii));
     int _Izw2;for (_Izw2=0; _Izw2<2*8; ++_Izw2)
       T_pr_dx[_Izw2] = malloc( sizeof(Type_Tsiiii ));
     int _Izw3;for (_Izw3=0; _Izw3<2*8; ++_Izw3){
       T_pr_dx[_Izw3]->Champ1= malloc(255 * sizeof(char));}
     Initial_t_eq ( & Tableau_des_equipes ) ;
     Tab_lis ( & Tableau_des_equipes , & Tabgroupes ) ;
     Menu_choix1() ;
     scanf ( " %d", &Choice ) ;

     while ( Choice > 4 )
     {
      printf ("\nERREUR! , veuillez entrer un nomre entre 1 et 4 !\n");
      Menu_choix1() ;
     scanf ( " %d", &Choice ) ;
     };

    // system("PAUSE");
     clrscr();
     if( Choice == 1) {
       for( Groupe  =  1 ;Groupe <=  8 ; ++Groupe){
         Match  =  1 ;
         Pointer  =  Element_V8Li ( Tabgroupes , Groupe   ) ;
         while( Pointer != NULL) {
           S  =  Valeur_Li ( Pointer ) ;
           Premiere_equipe  =  Mod ( S , 10 ) ;
           Deuxiemme_equipe  =  ( Mod ( S , 100 ) / 10 ) ;
           Hasardd ( & Groupe , & Premiere_equipe , & Deuxiemme_equipe , & Tableau_des_equipes ) ;
           Affich_rencontres ( & Tableau_des_equipes , & Groupe , & Match , & Premiere_equipe , & Deuxiemme_equipe ) ;
           Match  =  Match + 1 ;
           Pointer  =  Suivant_Li ( Pointer ) ;

         } ;
         printf ( " %s", "\n========================================================" ) ;

       } }
     else
       {
       if( Choice == 2) {
         for( Groupe  =  1 ;Groupe <=  8 ; ++Groupe){
           Match  =  1 ;
           Pointer  =  Element_V8Li ( Tabgroupes , Groupe   ) ;
           while( Pointer != NULL) {
             S  =  Valeur_Li ( Pointer ) ;
             Premiere_equipe  =  Mod ( S , 10 ) ;
             Deuxiemme_equipe  =  ( Mod ( S , 100 ) / 10 ) ;
             Par_favori ( & Groupe , & Premiere_equipe , & Deuxiemme_equipe , & Tableau_des_equipes ) ;
             Affich_rencontres ( & Tableau_des_equipes , & Groupe , & Match , & Premiere_equipe , & Deuxiemme_equipe ) ;
             Match  =  Match + 1 ;
             Pointer  =  Suivant_Li ( Pointer ) ;

           } ;
           printf ( " %s", "\n========================================================\n" ) ;

         } }
       else
         {
         if( Choice == 4) {
           for( Groupe  =  1 ;Groupe <=  8 ; ++Groupe){
             Match  =  1 ;
             Pointer  =  Element_V8Li ( Tabgroupes , Groupe   ) ;
             while( Pointer != NULL) {
               S  =  Valeur_Li ( Pointer ) ;
               Premiere_equipe  =  Mod ( S , 10 ) ;
               Deuxiemme_equipe  =  ( Mod ( S , 100 ) / 10 ) ;
               Par_points ( & Groupe , & Premiere_equipe , & Deuxiemme_equipe , & Tableau_des_equipes ) ;
               Affich_rencontres ( & Tableau_des_equipes , & Groupe , & Match , & Premiere_equipe , & Deuxiemme_equipe ) ;
               Match  =  Match + 1 ;
               Pointer  =  Suivant_Li ( Pointer ) ;

             } ;
             printf ( " %s", "\n========================================================\n" ) ;

           } }
         else
           {
           if( Choice == 3) {
             for( Groupe  =  1 ;Groupe <=  8 ; ++Groupe){
               Match  =  1 ;
               Pointer  =  Element_V8Li ( Tabgroupes , Groupe   ) ;
               while( Pointer != NULL) {
                 S  =  Valeur_Li ( Pointer ) ;
                 Premiere_equipe  =  Mod ( S , 10 ) ;
                 Deuxiemme_equipe  =  ( Mod ( S , 100 ) / 10 ) ;
                 Hasard_favori ( & Groupe , & Premiere_equipe , & Deuxiemme_equipe , & Tableau_des_equipes ) ;
                 Affich_rencontres ( & Tableau_des_equipes , & Groupe , & Match , & Premiere_equipe , & Deuxiemme_equipe ) ;
                 Match  =  Match + 1 ;
                 Pointer  =  Suivant_Li ( Pointer ) ;

               } ;
               printf ( " %s", "\n========================================================\n" ) ;

             } ;

           } ;


         } ;


       } ;

     } ;

    }
  /*******************************************************************************************************/
  void Initial_t_eq (Typevect_V8_4Tsiiii *Tableau_des_equipes)
    {
      /** Variables locales **/
        Typetab_V32Tsiiii T_Tableau_des_equipes;
      Type_Tsiiii S_Tableau_des_equipes;
      int _Izw;  /** Variable de contrôle **/

      /** Corps du module **/
     int _Izw2;for (_Izw2=0; _Izw2<32; ++_Izw2)
       T_Tableau_des_equipes[_Izw2] = malloc(sizeof(Type_Tsiiii));
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Allemagne" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 6 ;
     S_Tableau_des_equipes.Champ4 = 1650 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 0 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Angleterre" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 32 ;
     S_Tableau_des_equipes.Champ4 = 1761 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 1 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Espagne" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 12 ;
     S_Tableau_des_equipes.Champ4 = 1709 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 2 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "France" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 20 ;
     S_Tableau_des_equipes.Champ4 = 1789 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 3 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Belgique" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 2 ;
     S_Tableau_des_equipes.Champ4 = 1827 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 4 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Suisse" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 7 ;
     S_Tableau_des_equipes.Champ4 = 177 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 5 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Pays_Bas" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 31 ;
     S_Tableau_des_equipes.Champ4 = 1635 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 6 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Pologne" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 17 ;
     S_Tableau_des_equipes.Champ4 = 1544 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 7 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Portugal" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 14 ;
     S_Tableau_des_equipes.Champ4 = 1674 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 8 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Croatie" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 28 ;
     S_Tableau_des_equipes.Champ4 = 1621 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 9 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Danemark" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 8 ;
     S_Tableau_des_equipes.Champ4 = 1653;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 10 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Serbie" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 27 ;
     S_Tableau_des_equipes.Champ4 = 1547 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 11 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Pays_de_Galles" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 23 ;
     S_Tableau_des_equipes.Champ4 = 1588 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 12 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Bresil" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 4 ;
     S_Tableau_des_equipes.Champ4 = 1703 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 13 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Argentine" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 19 ;
     S_Tableau_des_equipes.Champ4 = 1765 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 14 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Urugway" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 11 ;
     S_Tableau_des_equipes.Champ4 = 1635 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 15 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Equateur" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 29 ;
     S_Tableau_des_equipes.Champ4 = 1452 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 16 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Cameroun" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 30 ;
     S_Tableau_des_equipes.Champ4 = 1480 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 17 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Maroc" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 9 ;
     S_Tableau_des_equipes.Champ4 = 1551 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 18 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Tunisie" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 5 ;
     S_Tableau_des_equipes.Champ4 = 1499 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 19 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Ghana" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 24 ;
     S_Tableau_des_equipes.Champ4 = 1327 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 20 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Senegal" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 16 ;
     S_Tableau_des_equipes.Champ4 = 1584 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 21 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Mexique" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 21 ;
     S_Tableau_des_equipes.Champ4 = 1658 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 22 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Etats_UNIS" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 3 ;
     S_Tableau_des_equipes.Champ4 = 1633 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 23 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Canada" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 26 ;
     S_Tableau_des_equipes.Champ4 = 1479 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 24 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Coree_Du_Sud" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 10 ;
     S_Tableau_des_equipes.Champ4 = 321 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 25 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Japon" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 22 ;
     S_Tableau_des_equipes.Champ4 = 1553 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 26 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Arabie_Saoudite" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 13 ;
     S_Tableau_des_equipes.Champ4 = 1444 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 27 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Iran" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 15 ;
     S_Tableau_des_equipes.Champ4 = 1553 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 28 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Quatar" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 18 ;
     S_Tableau_des_equipes.Champ4 = 1441 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 29 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Australie" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 25 ;
     S_Tableau_des_equipes.Champ4 = 1462 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 30 ] = S_Tableau_des_equipes ;
     S_Tableau_des_equipes.Champ1= malloc(255 * sizeof(char));
     strcpy(S_Tableau_des_equipes.Champ1 , "Perou" );
     S_Tableau_des_equipes.Champ2 = 0 ;
     S_Tableau_des_equipes.Champ3 = 1 ;
     S_Tableau_des_equipes.Champ4 = 1562 ;
     S_Tableau_des_equipes.Champ5 = 0 ;
     *T_Tableau_des_equipes [ 31 ] = S_Tableau_des_equipes ;
     Init_vect_V8_4Tsiiii ( *Tableau_des_equipes , T_Tableau_des_equipes , 32 )  ;

    }
  /************************************************************************************************/
  void Tab_lis (Typevect_V8_4Tsiiii *Tab , Typevect_V8Li *Tabgroupes)
    {
      /** Variables locales **/
      Pointeur_Li Tete=NULL;
      Pointeur_Li Ppp=NULL;
      Pointeur_Li P=NULL;
      Pointeur_Li Q=NULL;
      int Groupes;
      int Equipe1;
      int Equipe2;
      int Equipe3;
      int Equipe4;
      int Premiere_equipe;
      int Deuxiemme_equipe;
      int Rencontre;
      int Maillon;
      int S;
      int Ligne;

      /** Corps du module **/
     Equipe1  =  1 ;
     Equipe2  =  2 ;
     Equipe3  =  3 ;
     Equipe4  =  4 ;
     for( Groupes  =  1 ;Groupes <=  8 ; ++Groupes){
       Allouer_Li (& Tete ) ;
       Aff_val_Li ( Tete , ( Groupes * 100 + Equipe1 * 10 + Equipe2 ) ) ;
       Allouer_Li (& P ) ;
       Aff_val_Li ( P , ( Groupes * 100 + Equipe1 * 10 + Equipe3 ) ) ;
       Aff_adr_Li ( Tete , P ) ;
       Allouer_Li (& Q ) ;
       Aff_val_Li ( Q , ( Groupes * 100 + Equipe1 * 10 + Equipe4 ) ) ;
       Aff_adr_Li ( P , Q ) ;
       P  =  Q ;
       Allouer_Li (& Q ) ;
       Aff_val_Li ( Q , ( Groupes * 100 + Equipe2 * 10 + Equipe3 ) ) ;
       Aff_adr_Li ( P , Q ) ;
       P  =  Q ;
       Allouer_Li (& Q ) ;
       Aff_val_Li ( Q , ( Groupes * 100 + Equipe2 * 10 + Equipe4 ) ) ;
       Aff_adr_Li ( P , Q ) ;
       P  =  Q ;
       Allouer_Li (& Q ) ;
       Aff_val_Li ( Q , ( Groupes * 100 + Equipe3 * 10 + Equipe4 ) ) ;
       Aff_adr_Li ( P , Q ) ;
       Aff_adr_Li ( Q , NULL ) ;
       Aff_element_V8Li ( *Tabgroupes , Groupes   , Tete ) ;

     } ;

    }
  /*********************************************************************************************/
  void Affich_rencontres (Typevect_V8_4Tsiiii *Tab , int *Groupe , int *Rencontre , int *Eq1 , int *Eq2)
    {

      /** Corps du module **/
     printf ( " %s", "\n___________________________________________________\n" ) ;
     textbackground(10);
     printf ( " %s", "   Le groupe  " );
     textbackground(10);
     printf ( " %d", *Groupe );
     printf ( " %s", " :                              " ) ;
     textbackground(0);
     textcolor(11);
     printf ( " %s", "\n         La rencontre " );
     printf ( " %d", *Rencontre );
     printf ( " %s", " : " ) ;
     textcolor(15);
     textbackground(0);
     printf ( " %s", "\n" ) ;
     printf ( " %s", "   " ) ;
     textcolor(10);
     printf ( " %s", Struct1_Tsiiii(Element_V8_4Tsiiii(*Tab,*Groupe,*Eq1)) ) ;
     textcolor(15);
     printf ( " %s", "\n Son score pour cette rencontre est :" );
     printf ( " %d", Struct5_Tsiiii(Element_V8_4Tsiiii(*Tab,*Groupe,*Eq1)) ) ;
    /*ECRIRE('le total de ses points de classement de FIFA :',
     STRUCT(element(tab[groupe,eq1]),4));*/
     printf ( " %s", "\n Son score total est :  " );
     printf ( " %d", Struct2_Tsiiii(Element_V8_4Tsiiii(*Tab,*Groupe,*Eq1)) ) ;
     printf ( " %s", "                            \n" ) ;
     printf ( "\n ");
     printf ( " %s", "---------------VS ------------------\n" ) ;
     printf ( "\n ");
     printf ( " %s", "   " ) ;
     textcolor(10);
     printf ( " %s", Struct1_Tsiiii(Element_V8_4Tsiiii(*Tab,*Groupe,*Eq2)) ) ;
     textcolor(15);
     printf ( " %s", "\n Son score pour cette rencontre est :" );
     printf ( " %d", Struct5_Tsiiii(Element_V8_4Tsiiii(*Tab,*Groupe,*Eq2)) ) ;
    /*ECRIRE ( 'le total de ses points de classement de FIFA : ',
     STRUCT ( element(tab[groupe,eq2]) ,4)); */
     printf ( " %s", "\n Son score total est :" );
     printf ( " %d", Struct2_Tsiiii(Element_V8_4Tsiiii(*Tab,*Groupe,*Eq2)) ) ;
     printf ( "\n");



    }
  /****************************************************************************************************/
  void Hasardd (int *Numg , int *Eq1 , int *Eq2 , Typevect_V8_4Tsiiii *Tab)
    {
      /** Variables locales **/
      int Pourcentage;

      /** Corps du module **/
     Pourcentage  =  Aleanombre(100 ) + 1 ;
     if( ( Pourcentage > 50 )) {
       Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) + 3 ) ;
       Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 3 ) ;
       Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 0 ) ;
       }
     else
       {
       if( ( Pourcentage < 50 )) {
         Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  ) + 3 ) ;
         Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 3 ) ;
         Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 0 ) ;
         }
       else
         {
         if( ( Pourcentage == 50 )) {
           Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) + 1 ) ;
           Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  ) + 1 ) ;
           Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 1 ) ;
           Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 1 ) ;

         } ;

       } ;

     } ;

    }
  /******************************************************************************************************/
  void Par_favori (int *Numg , int *Eq1 , int *Eq2 , Typevect_V8_4Tsiiii *Tab)
    {

      /** Corps du module **/
     if( Struct3_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) > Struct3_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  )) {
       Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) + 3 ) ;
       Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 3 ) ;
       Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 0 ) ;
       }
     else
       {
       if( Struct3_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) < Struct3_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  )) {
         Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  ) + 3 ) ;
         Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 0 ) ;
         Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 3 ) ;

       } ;

     } ;

    }
  /**********************************************************************************************************/
  void Par_points (int *Numg , int *Eq1 , int *Eq2 , Typevect_V8_4Tsiiii *Tab)
    {

      /** Corps du module **/
     if( Struct4_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) > Struct4_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  )) {
       Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) + 3 ) ;
       Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 3 ) ;
       Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 0 ) ;
       }
     else
       {
       if( Struct4_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) < Struct4_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  )) {
         Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  ) + 3 ) ;
         Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 0 ) ;
         Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 3 ) ;
         }
       else
         {
         if( Struct4_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) == Struct4_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  )) {
           Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) + 1 ) ;
           Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  ) + 1 ) ;
           Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 1 ) ;
           Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 1 ) ;

         } ;

       } ;

     } ;

    }
  /*************************************************************************************************************/
  void Hasard_favori (int *Numg , int *Eq1 , int *Eq2 , Typevect_V8_4Tsiiii *Tab)
    {
      /** Variables locales **/
      int Pourcentage_hasard1;
      int Pourcentage_hasard2;
      int Pourcentage_favori1;
      int Pourcentage_favori2;
      int Moy1;
      int Moy2;

      /** Corps du module **/
     Pourcentage_hasard1  =  Aleanombre(100 ) + 1 ;
     Pourcentage_hasard2  =  ( 100 - Pourcentage_hasard1 ) ;
     Pourcentage_favori1  =  ( Struct3_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) * 100 ) / 32 ;
     Pourcentage_favori2  =  ( Struct3_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  ) * 100 ) / 32 ;
     Moy1  =  ( Pourcentage_hasard1 + Pourcentage_favori1 ) / 2 ;
     Moy2  =  ( Pourcentage_hasard2 + Pourcentage_favori2 ) / 2 ;
     if( Moy1 > Moy2) {
       Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) + 3 ) ;
       Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 3 ) ;
       Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 0 ) ;
       }
     else
       {
       if( Moy1 < Moy2) {
         Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  ) + 3 ) ;
         Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 0 ) ;
         Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 3 ) ;
         }
       else
         {
         if( Moy1 == Moy2) {
           Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  ) + 1 ) ;
           Aff_struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  ) + 1 ) ;
           Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq1   )  , 1 ) ;
           Aff_struct5_Tsiiii ( Element_V8_4Tsiiii ( *Tab , *Numg , *Eq2   )  , 1 ) ;

         } ;

       } ;

     } ;

    }
  /********************************************************************************************/
  void DEBUT(int *l)// graphique d'entrer
{
    int i,x,y,c;


    gotoxy(1,2);
    x=wherex();
    y=wherey();
    gotoxy(x,y);
    printf( ".___________..______        ________                 \n");
    gotoxy(x,y+1);
    printf( "|           ||   _  \\      |       /                 \n");
    gotoxy(x,y+2);
    printf( "`---|  |----`|  |_)  |     `---/  /                  \n");
    gotoxy(x,y+3);
    printf( "    |  |     |   ___/         /  /                   \n");
    gotoxy(x,y+4);
    printf( "    |  |     |  |            /  /----.               \n");


    gotoxy(x,y+5);
    printf( "    |__|     | _|           /________|               \n");
    //textcolor(9);
   gotoxy(x+15,y);
    printf(" __");
    gotoxy(x+15,y+1);
    //printf("|__|");
    textcolor(15);
    gotoxy(x+40,y+1);
    printf("TP Khawarizm 2022",144);
    gotoxy(x+40,y+3);
    printf("Coupe du Monde",130);
    gotoxy(x+40,y+5);
    printf("En football");
    gotoxy(25,11);
    printf("Deuxiemme TP d'Algorithmique et structures de donn%ces dynamiques\n",130);
    textcolor(10);
    gotoxy(4,12);
    x=wherex();
    y=wherey();
    gotoxy(x,y);

printf( "  ______   ______   __    __ .______   _______                \n");
printf( "    /      | /  __  \\ |  |  |  ||   _  \\ |   ____|               \n");
printf( "   |  ,----'|  |  |  ||  |  |  ||  |_)  ||  |__                  \n");
printf( "   |  |     |  |  |  ||  |  |  ||   ___/ |   __|                 \n");
printf( "   |  `----.|  `--'  ||  `--'  ||  |     |  |____                \n");
printf( "    \\______| \\______/  \\______/ | _|     |_______|               \n");

    printf("");
    gotoxy(x,y+7);
    printf("");
    printf( " _______   __    __      .___  ___.  ______  .__   __. _______   _______                \n");
printf( "   |       \\ |  |  |  |     |   \\/   | /  __  \\ |  \\ |  ||       \\ |   ____|               \n");
printf( "   |  .--.  ||  |  |  |     |  \\  /  ||  |  |  ||   \\|  ||  .--.  ||  |__                  \n");
printf( "   |  |  |  ||  |  |  |     |  |\\/|  ||  |  |  ||  . `  ||  |  |  ||   __|                 \n");
printf( "   |  '--'  ||  `--'  |     |  |  |  ||  `--'  ||  |\\   ||  '--'  ||  |____                \n");
printf( "   |_______/  \\______/      |__|  |__| \\______/ |__| \\__||_______/ |_______|               \n");
printf( "                          ___       ___     ___      ___                    \n");
printf( "                         |__ \\     / _ \\   |__ \\    |__ \\                   \n");
printf( "                            ) |   | | | |     ) |      ) |                  \n");
printf( "                           / /    | | | |    / /      / /                   \n");
printf( "                          / /_    | |_| |   / /_     / /_                   \n");
printf( "                         |____|    \\___/   |____|   |____|                  \n");


    textcolor(15);


    printf("       REALISE PAR:");
    gotoxy(37,34);
    textcolor(10);
    printf("  LAOUZAI LINA   |  Ghodbane zineb");
    textcolor(15);
    gotoxy(54,34);
    //printf("|");
    gotoxy(43,36);
    printf("SECTION C  |  GROUPE 08");
    gotoxy(41,38);

    printf("ANNEE UNIVERSITAIRE : 2021/2022\n");
    for (i=1 ; i <= 110 ; i++) printf("_");
    getch();


}





  void Menu_choix1()
    {
     clrscr();
      /** Corps du module **/
      textcolor(10);
    printf("____________________________________________________________________________________________________________\n");
    textcolor(15);
    printf("|                             TP2_ALSDD   :   coupe du monde 2022                                          |\n");
    printf("|     <laouzai lina >      <ghodbane zineb>        <1CPI_G08>        <ESI-Alger>     <2021/2022>           |\n");
    textcolor(10);
    printf("|__________________________________________________________________________________________________________|\n\n");
    printf("============================================================================================================\n");
    printf("____________________________________________________________________________________________________________\n");
    printf("\n\n\n");
    textcolor(10);
    //
    //textbackground(10);
    printf("-------------------Bienvenue dans la coupe du monde du Football 2022----------------------------------------\n");
    textcolor(10);
    textbackground(0);
    printf("------------------------------------------------------------------------------------------------------------\n");
    textcolor(15);

    printf("\n\n\n ======>  la coupe se fera en deux phases \n");
    printf("\n\n         ------> la phase1:");
    printf(" selectionnement de 16 equipes parmi les 32 : ");

    printf("\n                                    selon un des 4 criteres suivants :   ");


      textcolor(10);
      printf ( "\n\n\n\n");
      printf ( "\n     _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");

     printf ( " %s", "   |   ");
     textcolor(0);
     textbackground(10);
     printf(" veuillez choisir le critere pour la phase 1  ");
     textcolor(10);
     textbackground(0);
     printf("            | \n" ) ;
     //printf ( " %s", "\n" ) ;
     textcolor(10);
      printf ( "    |-------------------------------------------------------------|\n");
     printf ( " %s", "   |                                                             |\n" ) ;
     printf ( " %s", "   |       1---> Selectionnement par hasard                      |\n" ) ;
     printf ( " %s", "   |       2---> Selectionnement par favori                      |\n" ) ;
     printf ( " %s", "   |       3---> Selectionnement par hasard et par favori        |\n" ) ;
     printf ( " %s", "   |       4---> Selectionnement par classement de FIFA          |\n" ) ;
     textcolor(10);
     printf ( "    |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _|\n");
     textcolor(15);
     printf("votre choix est : ");

    }
  /*************************************************************************************************************/
  void Creer_t_p_d (Typevect_V8_4Tsiiii *Tableau_des_equipes , Typevect_V2_8Tsiiii *T_pr_dx)
    {
      /** Variables locales **/
      Typestr_Tsiiii Max1;
      Typestr_Tsiiii Max2;
      int Groupe;
      int Case1;
      int Case2;
      int Pos_max1;
      int Tirage;

      /** Corps du module **/
     Max1 = malloc(sizeof(Type_Tsiiii));
     Max1->Champ1 = malloc(255 * sizeof(char));
     Max2 = malloc(sizeof(Type_Tsiiii));
     Max2->Champ1 = malloc(255 * sizeof(char));
     for( Groupe  =  1 ;Groupe <=  8 ; ++Groupe){
      /* Affectation globale de structure */
       strcpy(Max1->Champ1,   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 1   )->Champ1);
       Max1->Champ2 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 1   )->Champ2;
       Max1->Champ3 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 1   )->Champ3;
       Max1->Champ4 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 1   )->Champ4;
       Max1->Champ5 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 1   )->Champ5;
 ;
       Pos_max1  =  1 ;
       for( Case1  =  2 ;Case1 <=  4 ; ++Case1){
         if( Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )  ) > Struct2_Tsiiii ( Max1  )) {
      /* Affectation globale de structure */
           strcpy(Max1->Champ1,   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )->Champ1);
           Max1->Champ2 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )->Champ2;
           Max1->Champ3 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )->Champ3;
           Max1->Champ4 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )->Champ4;
           Max1->Champ5 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )->Champ5;
 ;
           Pos_max1  =  Case1 ;
           }
         else
           {
           if( Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )  ) == Struct2_Tsiiii ( Max1  )) {
             Tirage  =  Aleanombre(2 ) ;
             if( ( Tirage == 1 )) {
      /* Affectation globale de structure */
               strcpy(Max1->Champ1,   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )->Champ1);
               Max1->Champ2 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )->Champ2;
               Max1->Champ3 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )->Champ3;
               Max1->Champ4 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )->Champ4;
               Max1->Champ5 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case1   )->Champ5;
 ;
               Pos_max1  =  Case1 ;

             } ;

           } ;

         } ;

       } ;
       Aff_element_V2_8Tsiiii ( *T_pr_dx , 1 , Groupe   , Max1 ) ;
       if( Pos_max1 != 1) {
      /* Affectation globale de structure */
         strcpy(Max2->Champ1,   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 1   )->Champ1);
         Max2->Champ2 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 1   )->Champ2;
         Max2->Champ3 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 1   )->Champ3;
         Max2->Champ4 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 1   )->Champ4;
         Max2->Champ5 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 1   )->Champ5;
 ;
         }
       else
         {
      /* Affectation globale de structure */
         strcpy(Max2->Champ1,   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 2   )->Champ1);
         Max2->Champ2 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 2   )->Champ2;
         Max2->Champ3 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 2   )->Champ3;
         Max2->Champ4 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 2   )->Champ4;
         Max2->Champ5 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , 2   )->Champ5;
 ;

       } ;
       for( Case2  =  2 ;Case2 <=  4 ; ++Case2){
         if( Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )  ) > Struct2_Tsiiii ( Max2  )) {
           if( Case2 != Pos_max1) {
      /* Affectation globale de structure */
             strcpy(Max2->Champ1,   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )->Champ1);
             Max2->Champ2 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )->Champ2;
             Max2->Champ3 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )->Champ3;
             Max2->Champ4 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )->Champ4;
             Max2->Champ5 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )->Champ5;
 ;

           } ;
           }
         else
           {
           if( Struct2_Tsiiii ( Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )  ) == Struct2_Tsiiii ( Max2  )) {
             if( Case2 != Pos_max1) {
               Tirage  =  Aleanombre(2 ) ;
               if( ( Tirage == 1 )) {
      /* Affectation globale de structure */
                 strcpy(Max1->Champ1,   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )->Champ1);
                 Max1->Champ2 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )->Champ2;
                 Max1->Champ3 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )->Champ3;
                 Max1->Champ4 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )->Champ4;
                 Max1->Champ5 =   Element_V8_4Tsiiii ( *Tableau_des_equipes , Groupe , Case2   )->Champ5;
 ;

               } ;

             } ;

           } ;

         } ;

       } ;
       Aff_element_V2_8Tsiiii ( *T_pr_dx , 2 , Groupe   , Max2 ) ;

     } ;
    /*ecrire('eq1 de groupe 1 est:');
ecrire(struct(element(t_pr_dx[1,1]),1));
ecrire('eq2 de groupe 1 est:');
ecrire(struct(element(t_pr_dx[2,1]),1));*/

    }
  /*****************************************************************************/
  /***************************************************PPHASE:2*********************************************/
   void Creerarbre_phase2()
    {
      /** Variables locales **/
      Pointeur_Ai P=NULL;
      Pointeur_Ai Q=NULL;
      Pointeur_Ai Gauche=NULL;
      Pointeur_Ai Droit=NULL;
      Pointeur_Ai G=NULL;
      Pointeur_Ai D=NULL;
      Pointeur_Ai M=NULL;
      Pointeur_Ai Racine=NULL;
      Pointeur_Ai A=NULL;
      Typevect_V2_8Tsiiii T_pr_dx;
      Pointeur_FAi F=NULL;
      int Ligne1_mch1;
      int Colonne1_mch1;
      int Ligne2_mch1;
      int Colonne2_mch1;
      int Gagnant1;
      int Ligne1_mch2;
      int Colonne1_mch2;
      int Ligne2_mch2;
      int Colonne2_mch2;
      int Gagnant2;
      int Boucle;
      int Premiere_eq_mch2;
      int Deuxiemme_eq_mch2;
      int Premiere_eq_mch1;
      int Deuxiemme_eq_mch1;
      int Choice;
      int tirage;

      /** Corps du module **/
      tirage= Aleanombre(2) + 1;
     T_pr_dx = malloc(2*8 * sizeof(Typestr_Tsiiii));
     int _Izw2;for (_Izw2=0; _Izw2<2*8; ++_Izw2)
       T_pr_dx[_Izw2] = malloc( sizeof(Type_Tsiiii ));
     int _Izw3;for (_Izw3=0; _Izw3<2*8; ++_Izw3){
       T_pr_dx[_Izw3]->Champ1= malloc(255 * sizeof(char));}
     int mlk=8;
     Menu_choix2() ;
     scanf ( " %d", &Choice ) ;
     while ( Choice >7 )
     {
         clrscr();
       Menu_choix2() ;
     scanf ( " %d", &Choice ) ;
     };
     clrscr();

     Creernoeud_Ai (& P ) ;
     Aff_info_Ai ( P , 1122 ) ;
     Creernoeud_Ai (& Q ) ;
     Aff_info_Ai ( Q , 1324 ) ;
     Creernoeud_Ai (& D ) ;
     Aff_info_Ai ( D , 0 ) ;
     Aff_fg_Ai ( D , P ) ;
     Aff_fd_Ai ( D , Q ) ;
     Creernoeud_Ai (& P ) ;
     Aff_info_Ai ( P , 1526 ) ;
     Creernoeud_Ai (& Q ) ;
     Aff_info_Ai ( Q , 1728 ) ;
     Creernoeud_Ai (& G ) ;
     Aff_info_Ai ( G , 0 ) ;
     Aff_fg_Ai ( G , P ) ;
     Aff_fd_Ai ( G , Q ) ;
     Creernoeud_Ai (& Gauche ) ;
     Aff_info_Ai ( Gauche , 0 ) ;
     Aff_fg_Ai ( Gauche , D ) ;
     Aff_fd_Ai ( Gauche , G ) ;
    /*le sous arbre droit*/
     Creernoeud_Ai (& P ) ;
     Aff_info_Ai ( P , 1221 ) ;
     Creernoeud_Ai (& Q ) ;
     Aff_info_Ai ( Q , 1423 ) ;
     Creernoeud_Ai (& D ) ;
     Aff_info_Ai ( D , 0 ) ;
     Aff_fg_Ai ( D , P ) ;
     Aff_fd_Ai ( D , Q ) ;
     Creernoeud_Ai (& P ) ;
     Aff_info_Ai ( P , 1625 ) ;
     Creernoeud_Ai (& Q ) ;
     Aff_info_Ai ( Q , 1827 ) ;
     Creernoeud_Ai (& G ) ;
     Aff_info_Ai ( G , 0 ) ;
     Aff_fg_Ai ( G , P ) ;
     Aff_fd_Ai ( G , Q ) ;
     Creernoeud_Ai (& Droit ) ;
     Aff_info_Ai ( Droit , 0 ) ;
     Aff_fg_Ai ( Droit , D ) ;
     Aff_fd_Ai ( Droit , G ) ;
    /*la racine*/
     Creernoeud_Ai (& Racine ) ;
     Aff_info_Ai ( Racine , 0 ) ;
     Aff_fg_Ai ( Racine , Gauche ) ;
     Aff_fd_Ai ( Racine , Droit ) ;
     Creer_t_p_d ( & Tableau_des_equipes , & T_pr_dx ) ;

     for( Boucle  =  1 ;Boucle <=  3 ; ++Boucle){

       A  =  Racine ;
       Creerfile_FAi (& F ) ;
       M  =  A ;
       Enfiler_FAi ( F , A ) ;
       while( ! Filevide_FAi ( F )) {
         Defiler_FAi ( F , &M ) ;
         if( ( M != NULL )) {
           if( ( Info_Ai ( M ) == 0 )) {
             if( ( Fg_Ai ( M ) != NULL )) {
              /*ecrire('lllllllll'); */
               if( ( Info_Ai ( Fg_Ai ( M ) ) != 0 )) {
                 Premiere_eq_mch1  =  Info_Ai ( Fg_Ai ( M ) ) / 100 ;
                 Deuxiemme_eq_mch1  =  Mod ( Info_Ai ( Fg_Ai ( M ) ) , 100 ) ;
                 Ligne1_mch1  =  Premiere_eq_mch1 / 10 ;
                 Colonne1_mch1  =  Mod ( Premiere_eq_mch1 , 10 ) ;
                 Ligne2_mch1  =  Deuxiemme_eq_mch1 / 10 ;
                 Colonne2_mch1  =  Mod ( Deuxiemme_eq_mch1 , 10 ) ;
                 Premiere_eq_mch2  =  Info_Ai ( Fd_Ai ( M ) ) / 100 ;
                 Deuxiemme_eq_mch2  =  Mod ( Info_Ai ( Fd_Ai ( M ) ) , 100 ) ;
                 Ligne1_mch2  =  Premiere_eq_mch2 / 10 ;
                 Colonne1_mch2  =  Mod ( Premiere_eq_mch2 , 10 ) ;
                 Ligne2_mch2  =  Deuxiemme_eq_mch2 / 10 ;
                 Colonne2_mch2  =  Mod ( Deuxiemme_eq_mch2 , 10 ) ;

                 if( Choice == 2) {
                   Par_favori2 ( & Ligne1_mch1 , & Colonne1_mch1 , & Ligne2_mch1 , & Colonne2_mch1 , & T_pr_dx , & Gagnant1 ) ;
                   Par_favori2 ( & Ligne1_mch2 , & Colonne1_mch2 , & Ligne2_mch2 , & Colonne2_mch2 , & T_pr_dx , & Gagnant2 ) ;
                   Aff_info_Ai ( M , Gagnant1 * 100 + Gagnant2 ) ;
                   }
                 else
                   {
                   if( Choice == 7) {
                     Par_points2 ( & Ligne1_mch1 , & Colonne1_mch1 , & Ligne2_mch1 , & Colonne2_mch1 , & T_pr_dx , & Gagnant1 ) ;
                     Par_points2 ( & Ligne1_mch2 , & Colonne1_mch2 , & Ligne2_mch2 , & Colonne2_mch2 , & T_pr_dx , & Gagnant2 ) ;
                     Aff_info_Ai ( M , Gagnant1 * 100 + Gagnant2 ) ;
                     }
                   else
                     {
                     if( Choice == 3) {
                       Par_resultat_phase1 ( & Ligne1_mch1 , & Colonne1_mch1 , & Ligne2_mch1 , & Colonne2_mch1 , & T_pr_dx , & Gagnant1 ) ;
                       Par_resultat_phase1 ( & Ligne1_mch2 , & Colonne1_mch2 , & Ligne2_mch2 , & Colonne2_mch2 , & T_pr_dx , & Gagnant2 ) ;
                       Aff_info_Ai ( M , Gagnant1 * 100 + Gagnant2 ) ;
                       }
                     else
                       {
                       if( Choice == 4) {
                         Resultatph1_favori2 ( & Ligne1_mch1 , & Colonne1_mch1 , & Ligne2_mch1 , & Colonne2_mch1 , & T_pr_dx , & Gagnant1 ) ;
                         Resultatph1_favori2 ( & Ligne1_mch2 , & Colonne1_mch2 , & Ligne2_mch2 , & Colonne2_mch2 , & T_pr_dx , & Gagnant2 ) ;
                         Aff_info_Ai ( M , Gagnant1 * 100 + Gagnant2 ) ;
                         }
                       else
                         {
                         if( Choice == 5) {
                           Iv ( & Ligne1_mch1 , & Colonne1_mch1 , & Ligne2_mch1 , & Colonne2_mch1 , & T_pr_dx , & Gagnant1 ) ;
                           Iv ( & Ligne1_mch2 , & Colonne1_mch2 , & Ligne2_mch2 , & Colonne2_mch2 , & T_pr_dx , & Gagnant2 ) ;
                           Aff_info_Ai ( M , Gagnant1 * 100 + Gagnant2 ) ;
                           }
                         else
                           {
                           if( Choice == 1) {
                             Hasard2 ( & Ligne1_mch1 , & Colonne1_mch1 , & Ligne2_mch1 , & Colonne2_mch1 , & T_pr_dx , & Gagnant1 ) ;
                             Hasard2 ( & Ligne1_mch2 , & Colonne1_mch2 , & Ligne2_mch2 , & Colonne2_mch2 , & T_pr_dx , & Gagnant2 ) ;
                             Aff_info_Ai ( M , Gagnant1 * 100 + Gagnant2 ) ;
                             }
                           else
                             {
                             if( Choice == 6) {
                               Ii_iv ( & Ligne1_mch1 , & Colonne1_mch1 , & Ligne2_mch1 , & Colonne2_mch1 , & T_pr_dx , & Gagnant1 ) ;
                               Ii_iv ( & Ligne1_mch2 , & Colonne1_mch2 , & Ligne2_mch2 , & Colonne2_mch2 , & T_pr_dx , & Gagnant2 ) ;
                               Aff_info_Ai ( M , Gagnant1 * 100 + Gagnant2 ) ;
                               if( Boucle == 3) {
                                 Ii_iv ( & Ligne1_mch1 , & Colonne1_mch1 , & Ligne2_mch1 , & Colonne2_mch1 , & T_pr_dx , & Gagnant1 ) ;
                                 printf ( " %s", "\n--------->L''equipe gagnante est:" );
                                 printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Gagnant1/10,Mod(Gagnant1,10))) ) ;

                               } ;

                             } ;

                           } ;

                         } ;

                       } ;

                     } ;

                   } ;

                 } ;
                /******/

                 printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Ligne1_mch1,Colonne1_mch1)) );
                 textcolor(11);
                 printf ( " %s", " VS " );
                 textcolor(15);
                 printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Ligne2_mch1,Colonne2_mch1)) ) ;
                 printf ( " %s", "\n--------->L'equipe gagnante est:" );
                 textcolor(10);
                 printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Gagnant1/10,Mod(Gagnant1,10))) ) ;
                 printf ( " %s", "\n\n" ) ;

                 textcolor(15);
                 printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Ligne1_mch2,Colonne1_mch2)) );
                 textcolor(11);
                 printf ( " %s", " VS " );
                 textcolor(15);
                 printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Ligne2_mch2,Colonne2_mch2)) ) ;
                 printf ( " %s", "\n--------->L'equipe gagnante est:" );
                 textcolor(10);
                 printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Gagnant2/10,Mod(Gagnant2,10))) ) ;
                 printf ( " %s", "\n\n" ) ;

                 textcolor(15);

               } ;

             } ;

           } ;

         } ;
        /* ECRIRE ( INFO ( M ) ) ;  */
         if( Fg_Ai ( M ) != NULL) {
           Enfiler_FAi ( F , Fg_Ai ( M ) ) ;

         } ;
         if( Fd_Ai ( M ) != NULL) {
           Enfiler_FAi ( F , Fd_Ai ( M ) ) ;

         } ;

       } ;
       printf ( " %s", "\n\n             __________________             \n\n" ) ;

       getch();

     } ;
     //textbackground(10);
     textcolor(10);
     printf("\n la finale\n");
     textcolor(15);
     textbackground(0);
     printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Info_Ai(Racine)/1000,Mod(Info_Ai(Racine)/100,10))) );
     printf ( " %s", " VS " );
     printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Mod(Info_Ai(Racine),100)/10,Mod(Info_Ai(Racine),10))) ) ;
     textcolor(10);
     printf ( " %s", "\n---------> L'equipe gagnante est:" );
     textcolor(0);
     textbackground(10);
     if (tirage=2){
     printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Gagnant1/10,Mod(Gagnant1,10))) ) ;
     }
     else
     {
      printf ( " %s", Struct1_Tsiiii(Element_V2_8Tsiiii(T_pr_dx,Gagnant2/10,Mod(Gagnant2,10))) ) ;
     }
     textbackground(0);
     textcolor(15);
     printf ( " %s", "\n\n             __________________             \n\n" ) ;
     getch();


    }
  /********************************************************************************************/
  void Menu_choix2()
    {
    textbackground(10);
    printf("\n\n\n ======>  passons maintenant a la deuxiemme phase \n");
    textbackground(0);
    textcolor(10);
    printf("\n\n         ------> la phase2:");
    textcolor(15);
    printf(" selectionnement de 8 equipes parmi les 16 : dans le huitiemme de finale  ");
    textcolor(10);
     printf(" \n                       ===>");
     textcolor(15);
     printf(" selectionnement de 4 equipes parmi les 8  : dans le un_quart de finale  ");
     textcolor(10);
     printf(" \n                       ===>");
     textcolor(15);
     printf(" selectionnement de 2 equipes parmi les 4  : dans le   demi      finale  ");
     textcolor(10);
     printf(" \n                       ===>");
     textcolor(15);
     printf(" et enfin le grand gagnant de la finale  ");




      /** Corps du module **/
     printf ( " %s", "\n" ) ;
     printf ( " %s", "\n" ) ;
     printf ( " %s", "\n" ) ;
     printf ( " %s", "\n" ) ;
     textcolor(10);
     printf ( " %s", "       _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ \n" ) ;
     textcolor(10);

     printf ( " %s", "      |                                                      |\n" ) ;
      printf ( " %s", "      | ");
     textcolor(15);
     printf("    veuillez choisir le critere pour la phase2      ");
     textcolor(10);
     printf(" |\n" ) ;
     printf ( " %s", "      |                                                      |\n" ) ;
     textcolor(10);
     printf ( " %s", "      |-------------------------------------------------------------------------------------------------------|\n" ) ;
     textcolor(15);
     printf ( " %s", "      |    1---> Selectionnement par hasard                                                                   |\n" ) ;
     printf ( " %s", "      |    2---> Selectionnement selon l'equipe favorite                                                      |\n" ) ;
     printf ( " %s", "      |    3---> Selectionnement selon les resultats de la premiere phase                                     |\n" ) ;
     printf ( " %s", "      |    4---> Selectionnement selon 3 et ceux des etapes precedentes de la phase2                          |\n" ) ;
     printf ( " %s", "      |    5---> Selectionnement selon 2 et 3                                                                 |\n" ) ;
     printf ( " %s", "      |    6---> Selectionnement selon 2 et 4                                                                 |\n" ) ;
     printf ( " %s", "      |    7---> Selectionnement par classement de FIFA                                                       |\n" ) ;
     textcolor(10);
     printf ( " %s", "      |_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _| \n" ) ;
     textbackground(10);
     textcolor(0);
     printf("  Remarque\n");
     textbackground(0);
     textcolor(15);
     printf("           apres avoir taper votre choix:\n ");
     printf("                                Tapez sur ENTRER pour voir le huitieme de finale\n ");
     printf("                                ReTapez sur ENTRER pour voir le un_quart de finale\n ");
     printf("                                ReTapez sur ENTRER pour voir le demi finale\n ");
     printf("                                Et enfin la finale\n ");
     printf("et maintenant donnez votre choix : ");

    }
  /*************************************************************************************************************/
  void Par_favori2 (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant)
    {

      /** Corps du module **/
     if( Struct3_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) > Struct3_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  )) {
       *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
       }
     else
       {
       if( Struct3_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) < Struct3_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  )) {
         *Gagnant  =  *Ligne2 * 10 + *Colonne2 ;

       } ;

     } ;

    }
  /**********************************************************************************************************/
  void Par_points2 (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant)
    {

      /** Corps du module **/
     if( Struct4_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) > Struct4_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  )) {
       *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
       }
     else
       {
       if( Struct4_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) < Struct4_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  )) {
         *Gagnant  =  *Ligne2 * 10 + *Colonne2 ;

       } ;

     } ;

    }
  /*************************************************************************************************************/
  void Par_resultat_phase1 (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant)
    {
      /** Variables locales **/
      int Tirage_au_sort;

      /** Corps du module **/
     Tirage_au_sort  =  Aleanombre(2 ) + 1 ;
     if( ( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) > Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) ) || ( ( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) ) == ( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) ) ) && ( Tirage_au_sort == 1 )) {
       *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
       }
     else
       {
       if( ( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) < Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) ) || ( ( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) ) == ( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) ) ) && ( Tirage_au_sort == 2 )) {
         *Gagnant  =  *Ligne2 * 10 + *Colonne2 ;

       } ;

     } ;

    }
  /*****************************************************************************/
  void Resultatph1_favori2 (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant)
    {
      /** Variables locales **/
      int Pourcen_ph1_eq1;
      int Pourcen_ph1_eq2;
      int Pourcen_favori2_eq1;
      int Pourcen_favori2_eq2;
      int Pourcen_favori2;
      int Moy_eq1;
      int Moy_eq2;
      int Tirage_au_sort;

      /** Corps du module **/
     Tirage_au_sort  =  Aleanombre(2 ) + 1 ;
     Pourcen_ph1_eq1  =  ( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) * 100 ) / 9 ;
     Pourcen_ph1_eq2  =  ( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) * 100 ) / 9 ;
     Pourcen_favori2_eq1  =  ( Struct3_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) * 100 ) / 32 ;
     Pourcen_favori2_eq2  =  ( Struct3_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) * 100 ) / 32 ;
     Moy_eq1  =  ( Pourcen_ph1_eq1 + Pourcen_favori2_eq1 ) / 2 ;
     Moy_eq2  =  ( Pourcen_ph1_eq2 + Pourcen_favori2_eq2 ) / 2 ;
     if( ( ( Moy_eq1 > Moy_eq2 ) || ( ( Moy_eq1 == Moy_eq2 ) && ( Tirage_au_sort == 1 ) ) )) {
       *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
       }
     else
       {
       if( ( ( Moy_eq1 < Moy_eq2 ) || ( ( Moy_eq1 == Moy_eq2 ) && ( Tirage_au_sort == 2 ) ) )) {
         *Gagnant  =  *Ligne2 * 10 + *Colonne2 ;

       } ;

     } ;

    }
  /*******************************************************************************************/
  void Iv (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant)
    {
      /** Variables locales **/
      int Tirage;
      int Buts;

      /** Corps du module **/
     Buts  =  Aleanombre(4 ) + 1 ;
     if( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) > Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  )) {
       Aff_struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  , Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) + Buts ) ;
       *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
       }
     else
       {
       if( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) < Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  )) {
         Aff_struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  , Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) + Buts ) ;
         *Gagnant  =  *Ligne2 * 10 + *Colonne2 ;
         }
       else
         {
         if( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) == Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  )) {
           Tirage  =  Aleanombre(2 ) ;
           if( Tirage == 0) {
             Aff_struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  , Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) + Buts ) ;
             *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
             }
           else
             {
             Aff_struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  , Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) + Buts ) ;
             *Gagnant  =  *Ligne2 * 10 + *Colonne2 ;

           } ;

         } ;

       } ;

     } ;

    }
  /**************************************************************************************************/
  void Hasard2 (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant)
    {
      /** Variables locales **/
      int Pourcentage;
      int Tirage;

      /** Corps du module **/
     Pourcentage  =  Aleanombre(100 ) + 1 ;
     if( ( Pourcentage > 50 )) {
       *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
       }
     else
       {
       if( ( Pourcentage < 50 )) {
         *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
         }
       else
         {
         if( ( Pourcentage == 50 )) {
           Tirage  =  Aleanombre(2 ) ;
           if( Tirage == 0) {
             *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
             }
           else
             {
             *Gagnant  =  *Ligne2 * 10 + *Colonne2 ;

           } ;

         } ;

       } ;

     } ;

    }
  /**************************************************************************************************/
  void Ii_iv (int *Ligne1 , int *Colonne1 , int *Ligne2 , int *Colonne2 , Typevect_V2_8Tsiiii *Tab , int *Gagnant)
    {
      /** Variables locales **/
      int Tirage;
      int Buts;
      int Moy1;
      int Moy2;

      /** Corps du module **/
     Buts  =  Aleanombre(4 ) + 1 ;
     Moy1  =  ( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) + Struct3_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) ) / 2 ;
     Moy2  =  ( Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) + Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) ) / 2 ;
     if( Moy1 > Moy2) {
       Aff_struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  , Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) + Buts ) ;
       *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
       }
     else
       {
       if( Moy1 < Moy2) {
         Aff_struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  , Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) + Buts ) ;
         *Gagnant  =  *Ligne2 * 10 + *Colonne2 ;
         }
       else
         {
         if( Moy1 == Moy2) {
           Tirage  =  Aleanombre(2 ) ;
           if( Tirage == 0) {
             Aff_struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  , Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne1 , *Colonne1   )  ) + Buts ) ;
             *Gagnant  =  *Ligne1 * 10 + *Colonne1 ;
             }
           else
             {
             Aff_struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  , Struct2_Tsiiii ( Element_V2_8Tsiiii ( *Tab , *Ligne2 , *Colonne2   )  ) + Buts ) ;
             *Gagnant  =  *Ligne2 * 10 + *Colonne2 ;

           } ;

         } ;

       } ;

     } ;

    }

  int main(int argc, char *argv[])
    {
      int* l;
     srand(time(NULL));
	 DEBUT(l);
	clrscr();
     Tableau_des_equipes = malloc(8*4 * sizeof(Typestr_Tsiiii));
     int _Izw2;for (_Izw2=0; _Izw2<8*4; ++_Izw2)
       Tableau_des_equipes[_Izw2] = malloc( sizeof(Type_Tsiiii ));
     int _Izw3;for (_Izw3=0; _Izw3<8*4; ++_Izw3){
       Tableau_des_equipes[_Izw3]->Champ1= malloc(255 * sizeof(char));}
     Tabgroupes = malloc(8 * sizeof(Pointeur_Li));
     int _Izw4;for (_Izw4=0; _Izw4<8; ++_Izw4)
       Tabgroupes[_Izw4] = malloc( sizeof(Pointeur_Li ));
     T_pr_dx = malloc(2*8 * sizeof(Typestr_Tsiiii));
     int _Izw5;for (_Izw5=0; _Izw5<2*8; ++_Izw5)
       T_pr_dx[_Izw5] = malloc( sizeof(Type_Tsiiii ));
     int _Izw6;for (_Izw6=0; _Izw6<2*8; ++_Izw6){
       T_pr_dx[_Izw6]->Champ1= malloc(255 * sizeof(char));}
     Phase1() ;
     system("PAUSE");
     clrscr();

     printf ( " %s", "" ) ;

     Creerarbre_phase2() ;
     printf ( " %s", "" ) ;

      system("PAUSE");
      return 0;
    }
