#include <stdlib.h>
#include <stdio.h>
#include "TPosition.c"

/* test Position*/
int main()
{
Position pos1 = creerPosition(2,1);

Position pos2 = creerPosition(2,4);
int res1 = surGrille(2,4);

int res2 = positions_relie(pos1,pos2);
printf("%d",res2);

return 0;
}

