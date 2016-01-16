#ifndef TLISTBATEAU
#define TLISTBATEAU
#include "TBateau.h"
#include "TJoueur.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct ListBateau ListBateau;

struct LisBateau
{
	TBateau bateau ;
	

};

typedef ListBateau* TListBateau;



/*critique: absence de specifications!*/

 
/*TListBateau get_bateaux_places(TListBateau ListBat, TJoueur j); envoie liste de bateaux places du joueur*/

/* --------- cette fonction n est pas utilisee dans le main = pas d interet a la coder --------- */

TListBateau creer_listBateau();
TListBateau add_bateau(TListBateau list, TBateau bateau, TJoueur j);
TListBateau supprimer_bateau(TJoueur joueur, TBateau bateau, int i);
TBateau get_bateau(TJoueur joueur, TListBateau bateau, int i);
TListBateau rendre_touche(TJoueur j, TBateau bat); /*rendre bateau touché*/
TListBateau rendre_coule(TJoueur j, TBateau bat); /*rendre bateau couleé*/

#endif 
