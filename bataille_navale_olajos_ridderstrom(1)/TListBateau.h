#ifndef TLISTBATEAU
#define TLISTBATEAU
#include "TBateau.h"
#include "TJoueur.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct ListBateau ListBateau;

struct ListBateau
{
	Bateau* element ;
	Bateau* suivant ;
	Bateau* precedent;
	

};

typedef ListBateau* TListBateau;



/*critique: absence de specifications!*/

 
/*TListBateau get_bateaux_places(TListBateau ListBat, TJoueur j); envoie liste de bateaux places du joueur*/

/* --------- cette fonction n est pas utilisee dans le main = pas d interet a la coder --------- */

TListBateau creer_listBateau();
int EstVide(TListBateau l);/*renvoie 1 si la liste est vide , 0 sinon*/
TListBateau add_bateau(TListBateau list, TBateau bateau); /*ajoute un bateau a la liste des bateaux*/

TListBateau supprimer_bateau(TJoueur joueur, TBateau bateau, int i);
/* cette fonction n est pas utilise dans le main = 
pas d interet a la coder 
d autant plus,elle est n a pas de specifications*/

TBateau get_bateau(TJoueur joueur, TListBateau bateau, int i);
/* meme chose pour cette fonction*/

TListBateau rendre_touche(TJoueur j, TBateau bat); /*rendre bateau touché*/
TListBateau rendre_coule(TJoueur j, TBateau bat); /*rendre bateau couleé*/
/* comment ? les specifications de joueur et bateau ne donnent aucun indice 
cette fonction n est pas utilisee dans le main
le main indique que :lorsqu un bateau est touche il est copie est inserer dans une liste "touches"*/

#endif 
