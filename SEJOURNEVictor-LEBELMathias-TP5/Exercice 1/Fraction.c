#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "Fraction.h"


int pgcd(int a, int b)
{
    // Division euclidienne pour trouver le PGCD 
    int r;
    int R_NULL = 0;
    r = 0;
    
    while(R_NULL == 0)
    {   
        r = a % b;
        if (r != 0)
        {
            a = b;
            b = r;
        }
        else
        {
            R_NULL = 1;
        } 
    }
    
    return(b);
}


void fraction_reduite( Fraction f1)
{
	int nb_pgcd;
	nb_pgcd = pgcd(f1.num , f1.den);
	f1.num = (f1.num / nb_pgcd);
	f1.den = (f1.den / nb_pgcd);
 	printf("Le resultat est: %d/%d \n", f1.num, f1.den);
	
}

void addFraction(Fraction f1, Fraction f2)
{
	Fraction fadd;
	
	fadd.num = (f1.num*f2.den) + (f2.num*f1.den);
	fadd.den = f1.den*f2.den;
	
	fraction_reduite(fadd); 
	

}

void subFraction(Fraction f1, Fraction f2)
{
	Fraction fsub;
	
	fsub.num = (f1.num*f2.den) - (f2.num*f1.den);
	fsub.den = f1.den*f2.den;
	
	fraction_reduite(fsub); 
	

}

void mulFraction(Fraction f1, Fraction f2)
{
	Fraction fmul;
	
	fmul.num = f1.num*f2.num;
	fmul.den = f1.den*f2.den;
	
	fraction_reduite(fmul); 
	

}

void divFraction(Fraction f1, Fraction f2)
{
	Fraction fdiv;
	
	fdiv.num = f1.num*f2.den;
	fdiv.den = f1.den*f2.num;
	
	fraction_reduite(fdiv); 
	

}














