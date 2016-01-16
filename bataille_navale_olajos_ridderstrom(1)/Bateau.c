#include <stdlib.h>
#include <stdio.h>
#include "TBateau.h"

TBateau creerBateau(int t,TPosition posStart,TPosition posFin,int numJ)
{

	Bateau* bat=malloc(sizeof(Bateau));
	bat->taille =t ;
	bat->positionStart =posStart;
	bat->positionFin =posFin;
	bat->numJoueur =numJ;

	return bat;
}

int get_taille(TBateau bat)
{

	return bat->taille ;
}

TBateau change_taille(TBateau bat)
{
	int t=bat->taille;
	bat->taille=t-1 ;

	return bat;
}

TPosition getPositionStart(Bateau bat)
{
	return bat.positionStart;
}

TPosition getPositionFin(Bateau bat)
{
	return bat.positionFin;
}