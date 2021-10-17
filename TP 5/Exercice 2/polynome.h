#ifndef __POLYNOME_H__
#define __POLYNOME_H__

#include <stdio.h>
#include <stdlib.h>


#define NBMAX 100
typedef struct {
	float coeff;/* coefficient du terme*/
	int degre;  /* degré du terme*/
} Terme;
typedef Terme Polynome[NBMAX];

void addPolynomes(Polynome p1, Polynome p2, Polynome res);
void creerPoly(Polynome p);



#endif