

#ifndef TGrille
#define TGrille

#include <stdio.h>
#include <stdlib.h>

#include "TBateau.h"
#include "TResultat.h"
#include "TJoueur.h"
#include "TPosition.h"



/*typedef struct TPosition TPosition ;
typedef struct TJoueur TJoueur;*/
typedef struct Grille Grille ;
typedef Grille* TGrille ;

TGrille creer_grille();

/*int coord_valide(TGrille grille, TPosition pos1, TPosition pos2, TBateau bat); /*le position est-il valide? Déjà occupé? sur la grille? bonne taille?*/

/* critique: le control de bonne taille se fait au moment de placer les bateaux et pas dans cette fonction idem pour deja occupé // ambiguité du terme valide qui est gere dans TPosition par la fonction sur grille*/

TResultat resultat_du_coup(TGrille grille, TPosition pos); /* retourner le resultat d'un coup*/
TBateau position_appartient(TGrille grille, TPosition pos); /*Renvoie le bateau sur la position passé comme argument */
int deja_occupe(TGrille grille, TPosition pos); /*Renvoie VRAI si le position est occupé par un bateau, sinon FAUX*/
int propre_bateau(TGrille grille, TJoueur joueur, TPosition pos); /*renvoie VRAI si un joueur tire sur son propre bateau*/
TGrille ajouter_position(TGrille grille, TBateau bat, TPosition pos); /*ajouter un position occupe par un bateau sur la grille*/

/* critique: la grille est a priori un ensemble de positions et non pas un ensemble de bateaux , donc l argument bat est inutile */
   /*solution*/
/* TGrille ajouter_position(TGrille grille, T TPosition pos); /*renvoie la grille modifiée */ 

TGrille supprimer_position(TGrille grille, TPosition pos); /*supprimer un position de la grille*/

/* on voit bien ici qu'ils n ont pas mis un bat en argument , BIEN coherence avec notre solution precedente */

TGrille placer_bateau(TPosition pos, TBateau bat, TGrille grille); /*placer bateau sur grille*/

/* comme on a aucune idee sur les bateaux, s'ils sont considéres comme ensemble de positions + une taille , on peut pas savoir l'utilité de pos en argument */
/* TGrille placer_bateau( TBateau bat, TGrille grille); */

#endif