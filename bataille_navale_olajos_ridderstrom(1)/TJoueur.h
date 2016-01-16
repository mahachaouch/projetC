#ifndef TJOUEUR
#define TJOUEUR

#include <stdlib.h>
#include <stdio.h>
/*#include "TListBateau.h"*/
/*#include "TListPosition.h"*/
/*#include "TPosition.h"*/
/*#include "TBateau.h"*/

typedef struct Joueur Joueur ;

struct Joueur 
{
	int num;
	int actif ;
};

typedef Joueur* TJoueur ;



TJoueur creer_joueur();

TJoueur changerEtat(TJoueur j);  /* permet d activer ou desactiver un joueur(activer=donner la main)*/

int EstActif(TJoueur j); /* retourne 1 si le joueur est actif sinon retourne 0*/

TJoueur SetEtat(TJoueur j,int etat); /* modifie l etat du joueur*/







#endif 


