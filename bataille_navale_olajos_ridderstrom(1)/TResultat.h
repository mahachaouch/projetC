œ

#ifndef TRESULTAT
#define TRESULTAT
#include <stdlib.h>
#include <stdio.h>
#include "TPartie.h"
#include "TBateau.h"
#include "TPosition.h"

/*typedef struct TPartie TPartie;*/       
/*typedef struct TPosition TPosition;*/

typedef struct Resultat Resultat;
typedef Resultat* TResultat;

TResultat creer_resultat(char str); /*Creer un nouveau resultat*/
void affiche_resultat(TResultat res); /*afficher le resultat d'un coup*/
TPartie mis_a_jour_partie(TResultat res, TBateau bateau, TPosition pos, TListBateau place, TListBateau touche); /*mis à jour le partie*/


#endif
