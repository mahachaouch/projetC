#include <stdlib.h>
#include <stdio.h>
#include "TJoueur.h"


TJoueur Creer_joueur(int n,int e)
{

	Joueur* j = malloc(2*sizeof(Joueur));
	j->num=n;
	j->actif=e;
	return j;
};

int EstActif(TJoueur j){

	return j->actif;
} 

TJoueur SetEtat(TJoueur j,int etat){

	j->actif = etat ;
	return j ;

}



TJoueur changerEtat(TJoueur j)
{
	int e=EstActif(j);
	if (e==0)
	{
		SetEtat(j,1);
	}
else 
	SetEtat(j,0);
return j;

}