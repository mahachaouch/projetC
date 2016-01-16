#include <stdlib.h>
#include <stdio.h>
#include "TListBateau.h"


TListBateau creer_listBateau()
{
	TListBateau l=NULL;
	return l ;

}

int EstVide(TListBateau l)
{
return (l== NULL);

}

TListBateau add_bateau(TListBateau l, TBateau bateau);
{

TListBateau l1= malloc(sizeof(ListBateau));
if (EstVide(l)) 
{
	
	l1->element= bateau;
	l1->suivant=NULL;
	l1->precedent=NULL;
 
}
else 
{
	l1->element = bateau ;
	l1->suivant=l;
	l1->precedent=NULL;
	l->precedent=l1;
}
return l1 ;
}

