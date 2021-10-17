#include "fonctions.h"



int main()
{
	
	float valeur = 0;
	float A[] = {1,3,5,6};
	int N = 3;
	float x0 = 2;
	valeur = valeurPolynome(A, N,x0);
	printf("%6.2f\n",valeur);
	return(0);
}



