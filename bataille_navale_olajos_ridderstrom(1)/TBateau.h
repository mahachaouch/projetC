
#ifndef TBATEAU
#define TBATEAU
#include <stdlib.h>
#include <stdio.h>
#include "TPosition.h"

typedef struct Bateau Bateau ;


/* absence de specifications!*/

/* notre conclusion: on peut dire que joueur est considere comme une liste de bateau : si ils placent un bateau sur la grille , ils renvoient ce dernier dans la liste "places" */

/* on a realisé qu il faut ajouter une position finale car on s est pas si le bateau se place horizentalement ou verticalement*/

struct Bateau {
	int taille;
	Position* positionStart;
	Position* positionFin;
	int numJoueur;
};

typedef Bateau* TBateau;

TBateau creer_bateau(int t,TPosition posStart,TPosition posFin,int numJoueur);
int get_taille(TBateau bat);    /*renvoie taille de bateau*/
TBateau change_taille(TBateau bat); /*diminue taille si bateau est touché*/
 
/* apres interrogation de l autre groupe, il s est avere que le bateau a une position de "depart"  / pas besoin d une position final vu qu on a la taille */
TPosition getPositionStart(Bateau bat);
TPosition getPositionFin(Bateau bat);

#endif 
