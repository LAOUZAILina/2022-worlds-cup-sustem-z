
   SOIENT
       Tableau_des_equipes UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
      /*tableau des 32 equipes  */
       Tabgroupes UN VECTEUR ( 8 ) DE LISTES ;
      /*tableau des lists de la phase 1*/
       Racine UN POINTEUR VERS ARB ;
       T_pr_dx UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
      /*tableau des equipes retenues de la phase 1 
      -------------> 1ere ligne : les premiers de chaque groupe 
      -------------> 2eme ligne : les duexiemmes de chaque groupe */
      /*********************************lles actions******************************************/
       Initial_t_eq UNE ACTION ;
       Menu_choix1 UNE ACTION ;
       Menu_choix2 UNE ACTION ;
       Hasardd UNE ACTION ;
       Par_favori UNE ACTION ;
       Par_points UNE ACTION ;
       Hasard_favori UNE ACTION ;
       Tab_lis UNE ACTION ;
       Creer_t_p_d UNE ACTION ;
       Affich_rencontres UNE ACTION ;
       Creerarbre_phase2 UNE ACTION ;
       Phase1 UNE ACTION ;
       Par_favori2 UNE ACTION ;
       Par_points2 UNE ACTION ;
       Resultatph1_favori2 UNE ACTION ;
       Par_resultat_phase1 UNE ACTION ;
       Iv UNE ACTION ;
       Ii_iv UNE ACTION ;
       Hasard2 UNE ACTION ;
      /*************************************pprogramme principal*****************************/
      
   DEBUT
       APPEL Phase1 ;
       ECRIRE ( '' ) ;
       APPEL Creerarbre_phase2 ;
      
   FIN
  /**************************************pprogramme principal****************************/
  /*************************************************************************************/
   ACTION Phase1
   SOIENT
       Groupe , Choice , Premiere_equipe , Deuxiemme_equipe , S , Match DES ENTIERS ;
       Pointer UN POINTEUR VERS LISTE ;
       T_pr_dx UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
      
   DEBUT
       APPEL Initial_t_eq ( Tableau_des_equipes ) ;
       APPEL Tab_lis ( Tableau_des_equipes , Tabgroupes ) ;
       APPEL Menu_choix1 ;
       LIRE ( Choice ) ;
       SI Choice = 1
           POUR Groupe := 1 , 8
               ECRIRE ( '           Le groupe num ' , Groupe , ' : ' ) ;
               ECRIRE ( '' ) ;
               ECRIRE ( 'Equipe1             |Score |Score total |Equipe2              |Score |Score total' ) ;
               Match := 1 ;
               Pointer := ELEMENT ( Tabgroupes [ Groupe ] ) ;
               TANTQUE Pointer <> NIL
                   S := VALEUR ( Pointer ) ;
                   Premiere_equipe := MOD ( S , 10 ) ;
                   Deuxiemme_equipe := ( MOD ( S , 100 ) / 10 ) ;
                   APPEL Hasardd ( Groupe , Premiere_equipe , Deuxiemme_equipe , Tableau_des_equipes ) ;
                   APPEL Affich_rencontres ( Tableau_des_equipes , Groupe , Match , Premiere_equipe , Deuxiemme_equipe
                   ) ;
                   Match := Match + 1 ;
                   Pointer := SUIVANT ( Pointer ) ;
                  
               FINTANTQUE ;
               ECRIRE ( '===================================================================================' ) ;
              
           FINPOUR
       SINON
           SI Choice = 2
               POUR Groupe := 1 , 8
                   ECRIRE ( '           Le groupe num ' , Groupe , ' : ' ) ;
                   ECRIRE ( '' ) ;
                   ECRIRE ( 'Equipe1             |Score |Score total |Equipe2              |Score |Score total' ) ;
                   Match := 1 ;
                   Pointer := ELEMENT ( Tabgroupes [ Groupe ] ) ;
                   TANTQUE Pointer <> NIL
                       S := VALEUR ( Pointer ) ;
                       Premiere_equipe := MOD ( S , 10 ) ;
                       Deuxiemme_equipe := ( MOD ( S , 100 ) / 10 ) ;
                       APPEL Par_favori ( Groupe , Premiere_equipe , Deuxiemme_equipe , Tableau_des_equipes ) ;
                       APPEL Affich_rencontres ( Tableau_des_equipes , Groupe , Match , Premiere_equipe ,
                       Deuxiemme_equipe ) ;
                       Match := Match + 1 ;
                       Pointer := SUIVANT ( Pointer ) ;
                      
                   FINTANTQUE ;
                   ECRIRE ( '===================================================================================' ) ;
                  
               FINPOUR
           SINON
               SI Choice = 4
                   POUR Groupe := 1 , 8
                       ECRIRE ( '           Le groupe num ' , Groupe , ' : ' ) ;
                       ECRIRE ( '' ) ;
                       ECRIRE ( 'Equipe1             |Score |Score total |Equipe2              |Score |Score total' )
                       ;
                       Match := 1 ;
                       Pointer := ELEMENT ( Tabgroupes [ Groupe ] ) ;
                       TANTQUE Pointer <> NIL
                           S := VALEUR ( Pointer ) ;
                           Premiere_equipe := MOD ( S , 10 ) ;
                           Deuxiemme_equipe := ( MOD ( S , 100 ) / 10 ) ;
                           APPEL Par_points ( Groupe , Premiere_equipe , Deuxiemme_equipe , Tableau_des_equipes ) ;
                           APPEL Affich_rencontres ( Tableau_des_equipes , Groupe , Match , Premiere_equipe ,
                           Deuxiemme_equipe ) ;
                           Match := Match + 1 ;
                           Pointer := SUIVANT ( Pointer ) ;
                          
                       FINTANTQUE ;
                       ECRIRE ( '==================================================================================='
                       ) ;
                      
                   FINPOUR
               SINON
                   SI Choice = 3
                       POUR Groupe := 1 , 8
                           ECRIRE ( '           Le groupe num ' , Groupe , ' : ' ) ;
                           ECRIRE ( '' ) ;
                           ECRIRE (
                           'Equipe1             |Score |Score total |Equipe2              |Score |Score total' ) ;
                           Match := 1 ;
                           Pointer := ELEMENT ( Tabgroupes [ Groupe ] ) ;
                           TANTQUE Pointer <> NIL
                               S := VALEUR ( Pointer ) ;
                               Premiere_equipe := MOD ( S , 10 ) ;
                               Deuxiemme_equipe := ( MOD ( S , 100 ) / 10 ) ;
                               APPEL Hasard_favori ( Groupe , Premiere_equipe , Deuxiemme_equipe , Tableau_des_equipes
                               ) ;
                               APPEL Affich_rencontres ( Tableau_des_equipes , Groupe , Match , Premiere_equipe ,
                               Deuxiemme_equipe ) ;
                               Match := Match + 1 ;
                               Pointer := SUIVANT ( Pointer ) ;
                              
                           FINTANTQUE ;
                           ECRIRE (
                           '===================================================================================' ) ;
                          
                       FINPOUR ;
                      
                   FINSI ;
                  
               FINSI ;
              
           FINSI ;
          
       FINSI ;
      
   FIN
  /*******************************************************************************************************/
   ACTION Initial_t_eq ( Tableau_des_equipes ) ;
   SOIT
       Tableau_des_equipes UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
      
   DEBUT
  /* on a choisi de nommer chaque equipe selon son numero et son groupe pour generaliser le programme*/
       INIT_VECT ( Tableau_des_equipes , [ [ 'equipe1_de_groupe1' , 0 , 6 , 1050 , 0 ] , [ 'equipe2_de_groupe1' , 0 ,
       32 , 1040 , 0 ] , [ 'equipe3_de_groupe1' , 0 , 12 , 2070 , 0 ] , [ 'equipe4_de_groupe1' , 0 , 20 , 769 , 0 ] ,
       [ 'equipe1_de_groupe2' , 0 , 2 , 1088 , 0 ] , [ 'equipe2_de_groupe2' , 0 , 7 , 1177 , 0 ] , [
       'equipe3_de_groupe2' , 0 , 31 , 1127 , 0 ] , [ 'equipe4_de_groupe2' , 0 , 17 , 950 , 0 ] , [
       'equipe1_de_groupe3' , 0 , 14 , 1188 , 0 ] , [ 'equipe2_de_groupe3' , 0 , 28 , 1077 , 0 ] , [
       'equipe3_de_groupe3' , 0 , 8 , 1548 , 0 ] , [ 'equipe4_de_groupe3' , 0 , 27 , 1170 , 0 ] , [
       'equipe1_de_groupe4' , 0 , 23 , 1203 , 0 ] , [ 'equipe2_de_groupe4' , 0 , 4 , 1703 , 0 ] , [
       'equipe3_de_groupe4' , 0 , 19 , 917 , 0 ] , [ 'equipe4_de_groupe4' , 0 , 11 , 1020 , 0 ] , [
       'equipe1_de_groupe5' , 0 , 29 , 884 , 0 ] , [ 'equipe2_de_groupe5' , 0 , 30 , 1043 , 0 ] , [
       'equipe3_de_groupe5' , 0 , 9 , 389 , 0 ] , [ 'equipe4_de_groupe5' , 0 , 5 , 917 , 0 ] , [ 'equipe1_de_groupe6'
       , 0 , 24 , 220 , 0 ] , [ 'equipe2_de_groupe6' , 0 , 16 , 639 , 0 ] , [ 'equipe3_de_groupe6' , 0 , 21 , 421 , 0
       ] , [ 'equipe4_de_groupe6' , 0 , 3 , 917 , 0 ] , [ 'equipe1_de_groupe7' , 0 , 26 , 1080 , 0 ] , [
       'equipe2_de_groupe7' , 0 , 10 , 1021 , 0 ] , [ 'equipe3_de_groupe7' , 0 , 22 , 722 , 0 ] , [
       'equipe4_de_groupe7' , 0 , 13 , 1137 , 0 ] , [ 'equipe1_de_groupe8' , 0 , 15 , 726 , 0 ] , [
       'equipe2_de_groupe8' , 0 , 18 , 1080 , 0 ] , [ 'equipe3_de_groupe8' , 0 , 25 , 936 , 0 ] , [
       'equipe4_de_groupe8' , 0 , 1 , 845 , 0 ] ] ) ;
      
   FIN
  /************************************************************************************************/
   ACTION Tab_lis ( Tab , Tabgroupes )
   SOIENT
       Tab UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Tabgroupes UN VECTEUR ( 8 ) DE LISTES ;
       Tete , Ppp DES POINTEURS VERS UNE LISTE ;
       P , Q DES POINTEURS VERS UNE LISTE ;
       Groupes , Equipe1 , Equipe2 , Equipe3 , Equipe4 , Premiere_equipe , Deuxiemme_equipe , Rencontre , Maillon , S
       , Ligne DES ENTIERS ;
      
   DEBUT
       Equipe1 := 1 ;
       Equipe2 := 2 ;
       Equipe3 := 3 ;
       Equipe4 := 4 ;
       POUR Groupes := 1 , 8
           ALLOUER ( Tete ) ;
           AFF_VAL ( Tete , ( Groupes * 100 + Equipe1 * 10 + Equipe2 ) ) ;
           ALLOUER ( P ) ;
           AFF_VAL ( P , ( Groupes * 100 + Equipe1 * 10 + Equipe3 ) ) ;
           AFF_ADR ( Tete , P ) ;
           ALLOUER ( Q ) ;
           AFF_VAL ( Q , ( Groupes * 100 + Equipe1 * 10 + Equipe4 ) ) ;
           AFF_ADR ( P , Q ) ;
           P := Q ;
           ALLOUER ( Q ) ;
           AFF_VAL ( Q , ( Groupes * 100 + Equipe2 * 10 + Equipe3 ) ) ;
           AFF_ADR ( P , Q ) ;
           P := Q ;
           ALLOUER ( Q ) ;
           AFF_VAL ( Q , ( Groupes * 100 + Equipe2 * 10 + Equipe4 ) ) ;
           AFF_ADR ( P , Q ) ;
           P := Q ;
           ALLOUER ( Q ) ;
           AFF_VAL ( Q , ( Groupes * 100 + Equipe3 * 10 + Equipe4 ) ) ;
           AFF_ADR ( P , Q ) ;
           AFF_ADR ( Q , NIL ) ;
           AFF_ELEMENT ( Tabgroupes [ Groupes ] , Tete ) ;
          
       FINPOUR ;
      
   FIN
  /*********************************************************************************************/
   ACTION Affich_rencontres ( Tab , Groupe , Rencontre , Eq1 , Eq2 )
   SOIENT
       Groupe , Rencontre , Eq1 , Eq2 DES ENTIERS ;
       Tab UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
      
   DEBUT
       ECRIRE ( '' ) ;
       ECRIRE ( STRUCT ( ELEMENT ( Tab [ Groupe , Eq1 ] ) , 1 ) , '|' , STRUCT ( ELEMENT ( Tab [ Groupe , Eq1 ] ) , 5
       ) , '  |' , STRUCT ( ELEMENT ( Tab [ Groupe , Eq1 ] ) , 2 ) , '        |' , STRUCT ( ELEMENT ( Tab [ Groupe ,
       Eq2 ] ) , 1 ) , '|' , STRUCT ( ELEMENT ( Tab [ Groupe , Eq2 ] ) , 5 ) , '  |' , STRUCT ( ELEMENT ( Tab [ Groupe
       , Eq2 ] ) , 2 ) ) ;
      
   FIN
  /****************************************************************************************************/
   ACTION Hasardd ( Numg , Eq1 , Eq2 , Tab )
   SOIENT
       Tab UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Numg , Eq1 , Eq2 , Pourcentage DES ENTIERS ;
      
   DEBUT
       Pourcentage := ALEANOMBRE ( 100 ) + 1 ;
       SI ( Pourcentage > 50 )
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 ) + 3 ) ;
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 3 ) ;
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 0 ) ;
          
       SINON
           SI ( Pourcentage < 50 )
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 ) + 3 ) ;
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 3 ) ;
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 0 ) ;
              
           SINON
               SI ( Pourcentage = 50 )
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 ) + 1
                   ) ;
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 ) + 1
                   ) ;
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 1 ) ;
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 1 ) ;
                  
               FSI ;
              
           FSI ;
          
       FSI ;
      
   FIN
  /******************************************************************************************************/
   ACTION Par_favori ( Numg , Eq1 , Eq2 , Tab )
   SOIENT
       Tab UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Numg , Eq1 , Eq2 DES ENTIERS ;
      
   DEBUT
       SI STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 3 ) > STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 3 )
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 ) + 3 ) ;
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 3 ) ;
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 0 ) ;
          
       SINON
           SI STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 3 ) < STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 3 )
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 ) + 3 ) ;
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 0 ) ;
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 3 ) ;
              
           FINSI ;
          
       FINSI ;
      
   FIN
  /**********************************************************************************************************/
   ACTION Par_points ( Numg , Eq1 , Eq2 , Tab )
   SOIENT
       Tab UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Numg , Eq1 , Eq2 DES ENTIERS ;
      
   DEBUT
       SI STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 4 ) > STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 4 )
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 ) + 3 ) ;
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 3 ) ;
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 0 ) ;
          
       SINON
           SI STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 4 ) < STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 4 )
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 ) + 3 ) ;
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 0 ) ;
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 3 ) ;
              
           SINON
               SI STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 4 ) = STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 4 )
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 ) + 1
                   ) ;
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 ) + 1
                   ) ;
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 1 ) ;
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 1 ) ;
                  
               FINSI ;
              
           FINSI ;
          
       FINSI ;
      
   FIN
  /*************************************************************************************************************/
   ACTION Hasard_favori ( Numg , Eq1 , Eq2 , Tab )
   SOIENT
       Tab UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Numg , Eq1 , Eq2 , Pourcentage_hasard1 , Pourcentage_hasard2 , Pourcentage_favori1 , Pourcentage_favori2 , Moy1
       , Moy2 DES ENTIERS ;
      
   DEBUT
       Pourcentage_hasard1 := ALEANOMBRE ( 100 ) + 1 ;
       Pourcentage_hasard2 := ( 100 - Pourcentage_hasard1 ) ;
       Pourcentage_favori1 := ( STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 3 ) * 100 ) / 32 ;
       Pourcentage_favori2 := ( STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 3 ) * 100 ) / 32 ;
       Moy1 := ( Pourcentage_hasard1 + Pourcentage_favori1 ) / 2 ;
       Moy2 := ( Pourcentage_hasard2 + Pourcentage_favori2 ) / 2 ;
       SI Moy1 > Moy2
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 ) + 3 ) ;
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 3 ) ;
           AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 0 ) ;
          
       SINON
           SI Moy1 < Moy2
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 ) + 3 ) ;
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 0 ) ;
               AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 3 ) ;
              
           SINON
               SI Moy1 = Moy2
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 2 ) + 1
                   ) ;
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 2 ) + 1
                   ) ;
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq1 ] ) , 5 , 1 ) ;
                   AFF_STRUCT ( ELEMENT ( Tab [ Numg , Eq2 ] ) , 5 , 1 ) ;
                  
               FINSI ;
              
           FINSI ;
          
       FINSI ;
      
   FIN
  /********************************************************************************************/
   ACTION Menu_choix1 DEBUT
       ECRIRE (
       '/****************************************************************************************************/' ) ;
       ECRIRE (
       '/*********************************La phase1**********************************************************/' ) ;
       ECRIRE (
       '/****************************************************************************************************/' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( '  Veulliez choisir le critere pour la phase1: ' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( '          1---> Selectionnement par hasard' ) ;
       ECRIRE ( '          2---> Selectionnement par favori' ) ;
       ECRIRE ( '          3---> Selectionnement par hasard et par favori' ) ;
       ECRIRE ( '          4---> Selectionnement par classement de FIFA' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( 'Les rencontres de la phase1:' ) ;
       ECRIRE ( '' ) ;
      
   FIN
  /*************************************************************************************************************/
   ACTION Creer_t_p_d ( Tableau_des_equipes , T_pr_dx )
   SOIENT
       Tableau_des_equipes UN VECTEUR ( 8 , 4 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       T_pr_dx UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
      /*premiere ligne contient les premiers classés de chaque groupe*/
      /*deuxiemme ligne contient les deuxiemmes classés de chaque groupe*/
       Max1 UN STRUCTURE ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Max2 UN STRUCTURE ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Groupe , Case1 , Case2 , Pos_max1 , Tirage , Indice DES ENTIERS ;
      
   DEBUT
       POUR Groupe := 1 , 8
           Max1 := ELEMENT ( Tableau_des_equipes [ Groupe , 1 ] ) ;
           Pos_max1 := 1 ;
           POUR Case1 := 2 , 4
               SI STRUCT ( ELEMENT ( Tableau_des_equipes [ Groupe , Case1 ] ) , 2 ) > STRUCT ( Max1 , 2 )
                   Max1 := ELEMENT ( Tableau_des_equipes [ Groupe , Case1 ] ) ;
                   Pos_max1 := Case1 ;
                  
               SINON
                   SI STRUCT ( ELEMENT ( Tableau_des_equipes [ Groupe , Case1 ] ) , 2 ) = STRUCT ( Max1 , 2 )
                       Tirage := ALEANOMBRE ( 2 ) ;
                       SI ( Tirage = 1 )
                           Max1 := ELEMENT ( Tableau_des_equipes [ Groupe , Case1 ] ) ;
                           Pos_max1 := Case1 ;
                          
                       FSI ;
                      
                   FINSI ;
                  
               FINSI ;
              
           FINPOUR ;
           AFF_ELEMENT ( T_pr_dx [ 1 , Groupe ] , Max1 ) ;
           SI Pos_max1 <> 1
               Max2 := ELEMENT ( Tableau_des_equipes [ Groupe , 1 ] ) ;
              
           SINON
               Max2 := ELEMENT ( Tableau_des_equipes [ Groupe , 2 ] ) ;
              
           FINSI ;
           POUR Case2 := 2 , 4
               SI STRUCT ( ELEMENT ( Tableau_des_equipes [ Groupe , Case2 ] ) , 2 ) > STRUCT ( Max2 , 2 )
                   SI Case2 <> Pos_max1
                       Max2 := ELEMENT ( Tableau_des_equipes [ Groupe , Case2 ] ) ;
                      
                   FINSI ;
                  
               SINON
                   SI STRUCT ( ELEMENT ( Tableau_des_equipes [ Groupe , Case2 ] ) , 2 ) = STRUCT ( Max2 , 2 )
                       SI Case2 <> Pos_max1
                           Tirage := ALEANOMBRE ( 2 ) ;
                           SI ( Tirage = 1 )
                               Max1 := ELEMENT ( Tableau_des_equipes [ Groupe , Case2 ] ) ;
                              
                           FSI ;
                          
                       FINSI ;
                      
                   FINSI ;
                  
               FINSI ;
              
           FINPOUR ;
           AFF_ELEMENT ( T_pr_dx [ 2 , Groupe ] , Max2 ) ;
          
       FINPOUR ;
       ECRIRE ( 'Les qualifiées de la phase1 sont:' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( 'les premiers        | les deuxiemmes' ) ;
       ECRIRE ( '                    |' ) ;
       POUR Indice := 1 , 8
           ECRIRE ( STRUCT ( ELEMENT ( T_pr_dx [ 1 , Indice ] ) , 1 ) , '|' , STRUCT ( ELEMENT ( T_pr_dx [ 2 , Indice
           ] ) , 1 ) ) ;
          
       FINPOUR ;
       ECRIRE ( '===================================================================================' ) ;
       ECRIRE ( '' ) ;
      
   FIN
  /*****************************************************************************/
  /***************************************************PPHASE:2*********************************************/
   ACTION Creerarbre_phase2
   SOIENT
       P , Q , Gauche , Droit , G , D , M , Racine DES POINTEURS VERS ARB ;
       A UN ARB ;
       T_pr_dx UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       F UNE FILE DE ARB ;
       Ligne1_mch1 , Colonne1_mch1 , Ligne2_mch1 , Colonne2_mch1 , Gagnant1 , Ligne1_mch2 , Colonne1_mch2 ,
       Ligne2_mch2 , Colonne2_mch2 , Gagnant2 , Boucle , Premiere_eq_mch2 , Deuxiemme_eq_mch2 , Premiere_eq_mch1 ,
       Deuxiemme_eq_mch1 , Choice , Ligne1_r , Colonne1_r , Ligne2_r , Colonne2_r , Tirage DES ENTIERS ;
      
   DEBUT
  /* la valeur de chaque noeud est les indices des lignes et des colonnes de l'equipe et son adversaire dans 
le tableau t_pr_dx*/
  /*creation de l'arbre*/
  /*le sous arbre gauche*/
       CREERNOEUD ( P ) ;
       AFF_INFO ( P , 1122 ) ;
       CREERNOEUD ( Q ) ;
       AFF_INFO ( Q , 1324 ) ;
       CREERNOEUD ( D ) ;
       AFF_INFO ( D , 0 ) ;
       AFF_FG ( D , P ) ;
       AFF_FD ( D , Q ) ;
       CREERNOEUD ( P ) ;
       AFF_INFO ( P , 1526 ) ;
       CREERNOEUD ( Q ) ;
       AFF_INFO ( Q , 1728 ) ;
       CREERNOEUD ( G ) ;
       AFF_INFO ( G , 0 ) ;
       AFF_FG ( G , P ) ;
       AFF_FD ( G , Q ) ;
       CREERNOEUD ( Gauche ) ;
       AFF_INFO ( Gauche , 0 ) ;
       AFF_FG ( Gauche , D ) ;
       AFF_FD ( Gauche , G ) ;
      /*le sous arbre droit*/
       CREERNOEUD ( P ) ;
       AFF_INFO ( P , 1221 ) ;
       CREERNOEUD ( Q ) ;
       AFF_INFO ( Q , 1423 ) ;
       CREERNOEUD ( D ) ;
       AFF_INFO ( D , 0 ) ;
       AFF_FG ( D , P ) ;
       AFF_FD ( D , Q ) ;
       CREERNOEUD ( P ) ;
       AFF_INFO ( P , 1625 ) ;
       CREERNOEUD ( Q ) ;
       AFF_INFO ( Q , 1827 ) ;
       CREERNOEUD ( G ) ;
       AFF_INFO ( G , 0 ) ;
       AFF_FG ( G , P ) ;
       AFF_FD ( G , Q ) ;
       CREERNOEUD ( Droit ) ;
       AFF_INFO ( Droit , 0 ) ;
       AFF_FG ( Droit , D ) ;
       AFF_FD ( Droit , G ) ;
      /*la racine*/
       CREERNOEUD ( Racine ) ;
       AFF_INFO ( Racine , 0 ) ;
       AFF_FG ( Racine , Gauche ) ;
       AFF_FD ( Racine , Droit ) ;
       APPEL Creer_t_p_d ( Tableau_des_equipes , T_pr_dx ) ;
       APPEL Menu_choix2 ;
       LIRE ( Choice ) ;
       POUR Boucle := 1 , 3
           A := Racine ;
           CREERFILE ( F ) ;
           M := A ;
           ENFILER ( F , A ) ;
           TQ NON FILEVIDE ( F )
               DEFILER ( F , M ) ;
               SI ( M <> NIL )
                   SI ( INFO ( M ) = 0 )
                       SI ( FG ( M ) <> NIL )
                           SI ( INFO ( FG ( M ) ) <> 0 )
                               Premiere_eq_mch1 := INFO ( FG ( M ) ) / 100 ;
                               Deuxiemme_eq_mch1 := MOD ( INFO ( FG ( M ) ) , 100 ) ;
                               Ligne1_mch1 := Premiere_eq_mch1 / 10 ;
                               Colonne1_mch1 := MOD ( Premiere_eq_mch1 , 10 ) ;
                               Ligne2_mch1 := Deuxiemme_eq_mch1 / 10 ;
                               Colonne2_mch1 := MOD ( Deuxiemme_eq_mch1 , 10 ) ;
                               Premiere_eq_mch2 := INFO ( FD ( M ) ) / 100 ;
                               Deuxiemme_eq_mch2 := MOD ( INFO ( FD ( M ) ) , 100 ) ;
                               Ligne1_mch2 := Premiere_eq_mch2 / 10 ;
                               Colonne1_mch2 := MOD ( Premiere_eq_mch2 , 10 ) ;
                               Ligne2_mch2 := Deuxiemme_eq_mch2 / 10 ;
                               Colonne2_mch2 := MOD ( Deuxiemme_eq_mch2 , 10 ) ;
                               SI Choice = 2
                                   APPEL Par_favori2 ( Ligne1_mch1 , Colonne1_mch1 , Ligne2_mch1 , Colonne2_mch1 ,
                                   T_pr_dx , Gagnant1 ) ;
                                   APPEL Par_favori2 ( Ligne1_mch2 , Colonne1_mch2 , Ligne2_mch2 , Colonne2_mch2 ,
                                   T_pr_dx , Gagnant2 ) ;
                                   AFF_INFO ( M , Gagnant1 * 100 + Gagnant2 ) ;
                                  
                               SINON
                                   SI Choice = 7
                                       APPEL Par_points2 ( Ligne1_mch1 , Colonne1_mch1 , Ligne2_mch1 , Colonne2_mch1 ,
                                       T_pr_dx , Gagnant1 ) ;
                                       APPEL Par_points2 ( Ligne1_mch2 , Colonne1_mch2 , Ligne2_mch2 , Colonne2_mch2 ,
                                       T_pr_dx , Gagnant2 ) ;
                                       AFF_INFO ( M , Gagnant1 * 100 + Gagnant2 ) ;
                                      
                                   SINON
                                       SI Choice = 3
                                           APPEL Par_resultat_phase1 ( Ligne1_mch1 , Colonne1_mch1 , Ligne2_mch1 ,
                                           Colonne2_mch1 , T_pr_dx , Gagnant1 ) ;
                                           APPEL Par_resultat_phase1 ( Ligne1_mch2 , Colonne1_mch2 , Ligne2_mch2 ,
                                           Colonne2_mch2 , T_pr_dx , Gagnant2 ) ;
                                           AFF_INFO ( M , Gagnant1 * 100 + Gagnant2 ) ;
                                          
                                       SINON
                                           SI Choice = 4
                                               APPEL Resultatph1_favori2 ( Ligne1_mch1 , Colonne1_mch1 , Ligne2_mch1 ,
                                               Colonne2_mch1 , T_pr_dx , Gagnant1 ) ;
                                               APPEL Resultatph1_favori2 ( Ligne1_mch2 , Colonne1_mch2 , Ligne2_mch2 ,
                                               Colonne2_mch2 , T_pr_dx , Gagnant2 ) ;
                                               AFF_INFO ( M , Gagnant1 * 100 + Gagnant2 ) ;
                                              
                                           SINON
                                               SI Choice = 5
                                                   APPEL Iv ( Ligne1_mch1 , Colonne1_mch1 , Ligne2_mch1 ,
                                                   Colonne2_mch1 , T_pr_dx , Gagnant1 ) ;
                                                   APPEL Iv ( Ligne1_mch2 , Colonne1_mch2 , Ligne2_mch2 ,
                                                   Colonne2_mch2 , T_pr_dx , Gagnant2 ) ;
                                                   AFF_INFO ( M , Gagnant1 * 100 + Gagnant2 ) ;
                                                  
                                               SINON
                                                   SI Choice = 1
                                                       APPEL Hasard2 ( Ligne1_mch1 , Colonne1_mch1 , Ligne2_mch1 ,
                                                       Colonne2_mch1 , T_pr_dx , Gagnant1 ) ;
                                                       APPEL Hasard2 ( Ligne1_mch2 , Colonne1_mch2 , Ligne2_mch2 ,
                                                       Colonne2_mch2 , T_pr_dx , Gagnant2 ) ;
                                                       AFF_INFO ( M , Gagnant1 * 100 + Gagnant2 ) ;
                                                      
                                                   SINON
                                                       SI Choice = 6
                                                           APPEL Ii_iv ( Ligne1_mch1 , Colonne1_mch1 , Ligne2_mch1 ,
                                                           Colonne2_mch1 , T_pr_dx , Gagnant1 ) ;
                                                           APPEL Ii_iv ( Ligne1_mch2 , Colonne1_mch2 , Ligne2_mch2 ,
                                                           Colonne2_mch2 , T_pr_dx , Gagnant2 ) ;
                                                           AFF_INFO ( M , Gagnant1 * 100 + Gagnant2 ) ;
                                                          
                                                       FSI ;
                                                      
                                                   FSI ;
                                                  
                                               FSI ;
                                              
                                           FSI ;
                                          
                                       FSI ;
                                      
                                   FSI ;
                                  
                               FSI ;
                              /******/
                               ECRIRE ( STRUCT ( ELEMENT ( T_pr_dx [ Ligne1_mch1 , Colonne1_mch1 ] ) , 1 ) , ' | ' ,
                               STRUCT ( ELEMENT ( T_pr_dx [ Ligne2_mch1 , Colonne2_mch1 ] ) , 1 ) ) ;
                               ECRIRE ( 'L''equipe gagnante est:' , STRUCT ( ELEMENT ( T_pr_dx [ Gagnant1 / 10 , MOD (
                               Gagnant1 , 10 ) ] ) , 1 ) ) ;
                               ECRIRE ( '' ) ;
                               ECRIRE ( STRUCT ( ELEMENT ( T_pr_dx [ Ligne1_mch2 , Colonne1_mch2 ] ) , 1 ) , ' | ' ,
                               STRUCT ( ELEMENT ( T_pr_dx [ Ligne2_mch2 , Colonne2_mch2 ] ) , 1 ) ) ;
                               ECRIRE ( 'L''equipe gagnante est:' , STRUCT ( ELEMENT ( T_pr_dx [ Gagnant2 / 10 , MOD (
                               Gagnant2 , 10 ) ] ) , 1 ) ) ;
                               ECRIRE ( '' ) ;
                              
                           FSI ;
                          
                       FSI ;
                      
                   FSI ;
                  
               FSI ;
              /* ECRIRE ( INFO ( M ) ) ;  */
               SI FG ( M ) <> NIL
                   ENFILER ( F , FG ( M ) ) ;
                  
               FSI ;
               SI FD ( M ) <> NIL
                   ENFILER ( F , FD ( M ) ) ;
                  
               FSI ;
              
           FTQ ;
           ECRIRE ( '             __________________             ' ) ;
          
       FINPOUR ;
       ECRIRE ( STRUCT ( ELEMENT ( T_pr_dx [ INFO ( Racine ) / 1000 , MOD ( INFO ( Racine ) / 100 , 10 ) ] ) , 1 ) ,
       ' | ' , STRUCT ( ELEMENT ( T_pr_dx [ MOD ( INFO ( Racine ) , 100 ) / 10 , MOD ( INFO ( Racine ) , 10 ) ] ) , 1
       ) ) ;
       Tirage := ALEANOMBRE ( 2 ) + 1 ;
       SI Tirage = 1
           ECRIRE ( 'L''equipe gagnante est:' , STRUCT ( ELEMENT ( T_pr_dx [ Gagnant1 / 10 , MOD ( Gagnant1 , 10 ) ] )
           , 1 ) ) ;
          
       SINON
           ECRIRE ( 'L''equipe gagnante est:' , STRUCT ( ELEMENT ( T_pr_dx [ Gagnant2 / 10 , MOD ( Gagnant2 , 10 ) ] )
           , 1 ) ) ;
          
       FSI ;
      
   FIN
  /**********************************************************************************************/
   ACTION Menu_choix2 DEBUT
       ECRIRE (
       '/****************************************************************************************************/' ) ;
       ECRIRE (
       '/*********************************La phase2**********************************************************/' ) ;
       ECRIRE (
       '/****************************************************************************************************/' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( '  Veulliez choisir le critere pour la phase2: ' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( '          1---> Selectionnement par hasard' ) ;
       ECRIRE ( '          2---> Selectionnement selon l''equipe favorite' ) ;
       ECRIRE ( '          3---> Selectionnement selon les resultats de la premiere phase' ) ;
       ECRIRE ( '          4---> Selectionnement selon 3 et ceux des etapes precedentes de la phase2' ) ;
       ECRIRE ( '          5---> Selectionnement selon 2 et 3' ) ;
       ECRIRE ( '          6---> Selectionnement selon 2 et 4' ) ;
       ECRIRE ( '          7---> Selectionnement par classement de FIFA' ) ;
       ECRIRE ( '' ) ;
       ECRIRE ( 'Les rencontres de la phase2:' ) ;
       ECRIRE ( '' ) ;
      
   FIN
  /*************************************************************************************************************/
   ACTION Par_favori2 ( Ligne1 , Colonne1 , Ligne2 , Colonne2 , Tab , Gagnant )
   SOIENT
       Tab UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Ligne1 , Colonne1 , Ligne2 , Colonne2 , Gagnant DES ENTIERS ;
      
   DEBUT
       SI STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 3 ) > STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 3 )
           Gagnant := Ligne1 * 10 + Colonne1 ;
          
       SINON
           SI STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 3 ) < STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) ,
           3 )
               Gagnant := Ligne2 * 10 + Colonne2 ;
              
           FINSI ;
          
       FINSI ;
      
   FIN
  /**********************************************************************************************************/
   ACTION Par_points2 ( Ligne1 , Colonne1 , Ligne2 , Colonne2 , Tab , Gagnant )
   SOIENT
       Tab UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Ligne1 , Colonne1 , Ligne2 , Colonne2 , Gagnant , Tirage DES ENTIERS ;
      
   DEBUT
       SI STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 4 ) > STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 4 )
           Gagnant := Ligne1 * 10 + Colonne1 ;
          
       SINON
           SI STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 4 ) < STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) ,
           4 )
               Gagnant := Ligne2 * 10 + Colonne2 ;
              
           SINON
               SI STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 4 ) = STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ]
               ) , 4 )
                   Tirage := ALEANOMBRE ( 2 ) + 1 ;
                   SI Tirage = 1
                       Gagnant := Ligne1 * 10 + Colonne1 ;
                      
                   SINON
                       Gagnant := Ligne2 * 10 + Colonne2 ;
                      
                   FSI ;
                  
               FSI ;
              
           FINSI ;
          
       FINSI ;
      
   FIN
  /*************************************************************************************************************/
   ACTION Par_resultat_phase1 ( Ligne1 , Colonne1 , Ligne2 , Colonne2 , Tab , Gagnant )
   SOIENT
       Tab UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Ligne1 , Colonne1 , Gagnant , Ligne2 , Colonne2 , Tirage_au_sort DES ENTIERS ;
      
   DEBUT
       Tirage_au_sort := ALEANOMBRE ( 2 ) + 1 ;
       SI ( STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 ) > STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 2
       ) ) OU ( ( STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 ) ) = ( STRUCT ( ELEMENT ( Tab [ Ligne2 ,
       Colonne2 ] ) , 2 ) ) ) ET ( Tirage_au_sort = 1 )
           Gagnant := Ligne1 * 10 + Colonne1 ;
          
       SINON
           SI ( STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 ) < STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] )
           , 2 ) ) OU ( ( STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 ) ) = ( STRUCT ( ELEMENT ( Tab [ Ligne2 ,
           Colonne2 ] ) , 2 ) ) ) ET ( Tirage_au_sort = 2 )
               Gagnant := Ligne2 * 10 + Colonne2 ;
              
           FSI ;
          
       FSI ;
      
   FIN
  /*****************************************************************************/
   ACTION Resultatph1_favori2 ( Ligne1 , Colonne1 , Ligne2 , Colonne2 , Tab , Gagnant )
   SOIENT
       Tab UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Ligne2 , Colonne2 , Ligne1 , Colonne1 , Gagnant , Pourcen_ph1_eq1 , Pourcen_ph1_eq2 , Pourcen_favori2_eq1 ,
       Pourcen_favori2_eq2 , Pourcen_favori2 , Moy_eq1 , Moy_eq2 , Tirage_au_sort DES ENTIERS ;
      
   DEBUT
       Tirage_au_sort := ALEANOMBRE ( 2 ) + 1 ;
       Pourcen_ph1_eq1 := ( STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 ) * 100 ) / 9 ;
       Pourcen_ph1_eq2 := ( STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 2 ) * 100 ) / 9 ;
       Pourcen_favori2_eq1 := ( STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 3 ) * 100 ) / 32 ;
       Pourcen_favori2_eq2 := ( STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 3 ) * 100 ) / 32 ;
       Moy_eq1 := ( Pourcen_ph1_eq1 + Pourcen_favori2_eq1 ) / 2 ;
       Moy_eq2 := ( Pourcen_ph1_eq2 + Pourcen_favori2_eq2 ) / 2 ;
       SI ( ( Moy_eq1 > Moy_eq2 ) OU ( ( Moy_eq1 = Moy_eq2 ) ET ( Tirage_au_sort = 1 ) ) )
           Gagnant := Ligne1 * 10 + Colonne1 ;
          
       SINON
           SI ( ( Moy_eq1 < Moy_eq2 ) OU ( ( Moy_eq1 = Moy_eq2 ) ET ( Tirage_au_sort = 2 ) ) )
               Gagnant := Ligne2 * 10 + Colonne2 ;
              
           FINSI ;
          
       FINSI ;
      
   FIN
  /*******************************************************************************************/
   ACTION Iv ( Ligne1 , Colonne1 , Ligne2 , Colonne2 , Tab , Gagnant )
   SOIENT
       Tab UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Tirage , Gagnant , Ligne1 , Colonne1 , Ligne2 , Colonne2 , Buts DES ENTIERS ;
      
   DEBUT
       Buts := ALEANOMBRE ( 4 ) + 1 ;
       SI STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 ) > STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 2 )
           AFF_STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2
           ) + Buts ) ;
           Gagnant := Ligne1 * 10 + Colonne1 ;
          
       SINON
           SI STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 ) < STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) ,
           2 )
               AFF_STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] )
               , 2 ) + Buts ) ;
               Gagnant := Ligne2 * 10 + Colonne2 ;
              
           SINON
               SI STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 ) = STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ]
               ) , 2 )
                   Tirage := ALEANOMBRE ( 2 ) + 1 ;
                   SI Tirage = 1
                       AFF_STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Ligne1 ,
                       Colonne1 ] ) , 2 ) + Buts ) ;
                       Gagnant := Ligne1 * 10 + Colonne1 ;
                      
                   SINON
                       AFF_STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Ligne2 ,
                       Colonne2 ] ) , 2 ) + Buts ) ;
                       Gagnant := Ligne2 * 10 + Colonne2 ;
                      
                   FINSI ;
                  
               FINSI ;
              
           FINSI ;
          
       FINSI ;
      
   FIN
  /**************************************************************************************************/
   ACTION Hasard2 ( Ligne1 , Colonne1 , Ligne2 , Colonne2 , Tab , Gagnant )
   SOIENT
       Tab UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Pourcentage , Gagnant , Ligne1 , Colonne1 , Ligne2 , Colonne2 , Tirage DES ENTIERS ;
      
   DEBUT
       Pourcentage := ALEANOMBRE ( 100 ) + 1 ;
       SI ( Pourcentage > 50 )
           Gagnant := Ligne1 * 10 + Colonne1 ;
          
       SINON
           SI ( Pourcentage < 50 )
               Gagnant := Ligne2 * 10 + Colonne2 ;
              
           SINON
               SI ( Pourcentage = 50 )
                   Tirage := ALEANOMBRE ( 2 ) + 1 ;
                   SI Tirage = 1
                       Gagnant := Ligne1 * 10 + Colonne1 ;
                      
                   SINON
                       Gagnant := Ligne2 * 10 + Colonne2 ;
                      
                   FINSI ;
                  
               FSI ;
              
           FSI ;
          
       FSI ;
      
   FIN
  /**************************************************************************************************/
   ACTION Ii_iv ( Ligne1 , Colonne1 , Ligne2 , Colonne2 , Tab , Gagnant )
   SOIENT
       Tab UN VECTEUR ( 2 , 8 ) DE STRUCTURES ( CHAINE , ENTIER , ENTIER , ENTIER , ENTIER ) ;
       Tirage , Gagnant , Ligne1 , Colonne1 , Ligne2 , Colonne2 , Buts , Moy1 , Moy2 DES ENTIERS ;
      
   DEBUT
       Buts := ALEANOMBRE ( 4 ) + 1 ;
       Moy1 := ( STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 ) + STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] )
       , 3 ) ) / 2 ;
       Moy2 := ( STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 2 ) + STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] )
       , 2 ) ) / 2 ;
       SI Moy1 > Moy2
           AFF_STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2
           ) + Buts ) ;
           Gagnant := Ligne1 * 10 + Colonne1 ;
          
       SINON
           SI Moy1 < Moy2
               AFF_STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] )
               , 2 ) + Buts ) ;
               Gagnant := Ligne2 * 10 + Colonne2 ;
              
           SINON
               SI Moy1 = Moy2
                   Tirage := ALEANOMBRE ( 2 ) + 1 ;
                   SI Tirage = 1
                       AFF_STRUCT ( ELEMENT ( Tab [ Ligne1 , Colonne1 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Ligne1 ,
                       Colonne1 ] ) , 2 ) + Buts ) ;
                       Gagnant := Ligne1 * 10 + Colonne1 ;
                      
                   SINON
                       AFF_STRUCT ( ELEMENT ( Tab [ Ligne2 , Colonne2 ] ) , 2 , STRUCT ( ELEMENT ( Tab [ Ligne2 ,
                       Colonne2 ] ) , 2 ) + Buts ) ;
                       Gagnant := Ligne2 * 10 + Colonne2 ;
                      
                   FINSI ;
                  
               FINSI ;
              
           FINSI ;
          
       FINSI ;
      
   FIN
