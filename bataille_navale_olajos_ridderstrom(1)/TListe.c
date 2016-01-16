#include <stdlib.h> 
#include <stdio.h>
#include "TListe.h"


 TListe CreerListe()
{
	TListe l=NULL;
	return l ;
}




/* EstVide: TListeEntier → bool – – retourne true si la liste est vide, false sinon. */
 int EstVide(TListe l)
{
return (l== NULL);

}


/* AjoutDébut: TListeEntier × int → TListeEntier */
TListe AjoutDebut(TListe l, int val) 
{ 	

TListe l1= malloc(sizeof(TListeEntier));
if (EstVide(l)) 
{
	
	l1->valeur= val;
	l1->suivant=NULL;
	l1->precedent=NULL;
 
}
else 
{
	l1->valeur = val ;
	l1->suivant=l;
	l1->precedent=NULL;
	l->precedent=l1;
}
return l1 ;
}


 void AfficheListe(TListe l) 
{ 
	if (EstVide(l))
	{
		printf("Aucun element a afficher\n");
	}
	else{
		
	int v;
	
	while ( !EstVide(l))
	{ /*on est pas arrivé a la fin de la liste*/
		v =l->valeur;
		printf("%d  ",v);
		l=l->suivant;
	}
}

}


/* AjoutFin: TListeEntier × int → TListeEntier – – retourne la liste obtenue en ajoutant l’entier donnée en fin de
liste ; si la liste est vide, se comporte comme AjoutDébut. */
TListe AjoutFin(TListe l,int val)
{
TListe l1=CreerListe();
if (EstVide(l))
{
	
	l->valeur=val;
	l->precedent=NULL;
	l->suivant=NULL;

	return l;
}
else
{
	l1->valeur=val;
	l1->precedent=l;
	l1->suivant=NULL;
	l->suivant=l1;

	return l;
}
}


/* Premier: TListeEntier → int – – retourne le premier élément de la liste ; renvoie une erreur si la liste est vide. */
 int Premier(TListe l)
{
	int res;
	if (EstVide(l))
	{
		printf("ERREUR: la liste est vide\n");
		
	}
	else
	{
		res=l->valeur;
	}
	return res;

}


Dernier: TListeEntier → int – – retourne le dernier élément de la liste ; renvoie une erreur si la liste est vide.*/
 int Dernier(TListe l)
{
int res;
	TListeEntier* list;
	list = l;
	if (EstVide(l))
	{
		printf("la liste est vide\n");
		
	}
	
	else
	{

		while (!EstVide(list -> suivant))
			{
				list = list -> suivant;
			}
			
		res = list -> valeur;
		
	}
	return res;
}


/* SupprimerTête: TListeEntier → TListeEntier – – retourne la liste obtenue en ayant supprimé le premier élément
de la liste ; Erreur si la liste est vide. */
 TListe SupprimerTete(TListe l)
{
TListeEntier* list = malloc(sizeof(TListeEntier));
	list = l;
	if (EstVide(l))
	{
		printf("la liste est  vide\n");
	}

	else if (EstVide(l->suivant))
	{
		list = CreerListe();
		free(l);

	}

	else 
	{
		
		l = l -> suivant;
		l -> precedent = NULL;
		free(list);
		list = l;

	}
	return list;
}


int NbOccurence(Tliste l,int e)
{
TListeEntier* list = malloc(sizeof(TListeEntier));
	list = l;
	int c=0;
	if (EstVide(l))
	{
		printf("la liste est  vide\n");
	}
 	else
 	{
 		while (!EstVide(l -> suivant))
			{
				if (l->valeur == e)
				{
					c++;
				}
				l = l -> suivant;
			}
 	}
 	return c ;
}




