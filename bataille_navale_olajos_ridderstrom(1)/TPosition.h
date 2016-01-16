#ifndef TPOSITION_H	
#define TPOSITION_H

#include <stdlib.h>
#include <stdio.h>

typedef struct Position Position ;

struct Position {
	int x;
	int y;

};


typedef  Position* TPosition;

TPosition creer_position(int x, int y);
int sur_grille(Position pos);                     /*renvoie vrai si 0<pos(x)<20; 0<pos(y)<20*/
int positions_relie(Position pos1, Position pos2); /*renvoie vrai si positions sont relié, faux sinon controle la continuité de la positionStart et positionFinal definissant un bateau, faut que les 2 positions soient sur une mm ligne ou une mm colonne*/
int GetX(Position pos); /* renvoie l abscisse de la position*/
int GetY(Position pos); /* renvoie la coordonee d une position*/
#endif 
