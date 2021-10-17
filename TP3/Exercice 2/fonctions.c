#include <stdio.h>

float valeurPolynome(float A[], int N, float x0)
{
	int i;
	float valeur = A[N];
	for( i = N; i > 0 ; --i )
	{
		valeur = valeur*x0 + A[i-1];
	}
	
	return(valeur);	
}








