#include <stdlib.h>
#include <stdio.h>
#include "TBateau.h"

TBateau creerBateau()
{

	Bateau* bat=NULL

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
