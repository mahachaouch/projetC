#ifndef TLISTPOSTION
#define TLISTPOSTION

#include <stdlib.h>
#include <stdio.h>
#include "TPosition.h"
#include "TJoueur.h"

/* aucune specification fonctionnelle*/


typedef struct ListPosition ListPosition;
typedef ListPosition* TListPosition;



TListPosition ajouter_position_joueur(TJoueur j, TPosition pos); /*ajouter un positions dans liste de positions occupes du joueur*/ 
/* critique: devrait etre dans TListPosition*/


TListPosition supprimer_position_joueur(TJoueur j, TPosition pos);

TListPosition creer_listPosition();
TListPosition add_position(TJoueur joueur, TPosition position);
TListPosition supprimer_list_position(TPosition pos1 ,TPosition pos2);
#endif 
