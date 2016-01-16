#ifndef TPartie
#define TPartie

#include <stdio.h>
#include <stdlib.h>
#include "TJoueur.h"
#include "TPosition.h"
#include "TResultat.h"


typedef struct Partie Partie;
typedef Partie* TPartie;

TPartie creer_partie(); /*creer un nouveau parti*/

TPosition saise_position(TJoueur joueur, TListBateau non_places); /*saisir positions pour les 5 bateaux d'un joueur et les place sur la grille*/
int est_fini(TListBateau places, TListBateau touches); /*renvoie VRAI si le joueur a gagne, FAUX sinon*/
TResultat tirer(TJoueur joueur_actif, TGrille grille, TListBateau places); /*saisir les cordonnes souhaitées par joueur_actif à tirer. Controller on ne tire pas sur ses propres bateaux, suit controller sur les cordonnes d'autre joueur.*/
TBateau get_bateau_touche(); /*renvoie le bateau qui vient d'être touché*/


#endif 
