#include <stdlib.h>
#include <stdio.h>
#include "TPosition.h"

TPosition creerPosition(int p,int q)
{

	Position* pos = malloc(2*sizeof(Position));
	pos->x =p;
	pos->y =q;

	return pos;
}

int GetX(Position pos)
{
	return pos.x ;
}

int GetY(Position pos)
{
	return pos.y ;
}

int surGrille(int x,int y)
{
	if(x>=0 && x<=20 && y>=0 && y<=20){
		return 0;
	}
	else
		return 1;
}


int positions_relie(Position posStart, Position posFin)
{
	int x1=GetX(posStart);
	int x2=GetX(posFin);
	int y1=GetY(posStart);
	int y2=GetY(posFin);

	if (x1==x2 || y1==y2)
	{
		return 1 ;
	}
	else
	{
		return 0 ;
	}
}

