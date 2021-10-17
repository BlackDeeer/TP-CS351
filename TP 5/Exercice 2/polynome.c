#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "polynome.h"



void creerPoly(Polynome p){
	float coeff;
	int degre =0;
	int i = 0;
	while ((degre >= 0) && (i < NBMAX)){
		printf("P[%d] = ",i);
		scanf("%f %d",&coeff,&degre);
		p[i].degre = degre;
		p[i].coeff = coeff;
		++i;
        }
	printf("\n");
	degre = 0;
	coeff = 0;
    }


int longeurPolynome(Polynome p)
{
	int i = 0;
	while ( (p[i].degre) >= 0 )
	{
		i++;
	}
	return(i);
	
	
}


void addPolynomes(Polynome p1, Polynome p2, Polynome res)
{
	
	int i = 0;
	int j = 0;
	int k = 0;
	int stop_i  = 0;
	int stop_j = 0;
	int long1,long2;
	
	long1 = longeurPolynome(p1);
	long2 = longeurPolynome(p2);

	
	while( stop_i == 0 && stop_j == 0 )
	{
		if ( p1[i].degre > p2[j].degre )
		{
			res[k].coeff = p1[i].coeff;
			res[k].degre = p1[i].degre;
			k++;
			i++;
		}
		
		else if ( p1[i].degre < p2[j].degre )
		{
			res[k].coeff = p2[j].coeff;
			res[k].degre = p2[j].degre;
			k++;
			j++;
		}
		
		else
		{
			res[k].coeff = p2[j].coeff + p1[i].coeff;
			res[k].degre = p2[j].degre;
			k++;
			i ++;
			j ++;
			
		}
	
	
		if( i == long1)
		{
			stop_i = 1;
		}
		if( j == long2)
		{
			stop_j = 1;
		}
	}

	while (i < long1)
	{
		res[k].coeff = p1[i].coeff;
		res[k].degre = p1[i].degre;
		k++;
		i++;
	}
	while (j< long2)
	{
		res[k].coeff = p2[j].coeff;
		res[k].degre = p2[j].degre;
		k++;
		j++;
		
	}
	res[k].coeff = 1;
	res[k].degre = -1;

}
















