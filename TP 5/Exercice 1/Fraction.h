#ifndef __FRACTION_H__
#define __FRACTION_H__

#include <stdio.h>
#include <stdlib.h>


typedef struct{
	int num;
	int den;
} Fraction;


void addFraction(Fraction f1, Fraction f2);
void subFraction(Fraction f1, Fraction f2);
void mulFraction(Fraction f1, Fraction f2);
void divFraction(Fraction f1, Fraction f2); 
int pgcd(int a, int b);

#endif