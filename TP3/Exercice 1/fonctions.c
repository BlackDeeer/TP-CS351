#include <stdio.h>
#include <math.h>

void afficherNotes( float Notes[], int n)
{
	int i;
	printf("Voici les notes : ");
	for( i = 0 ;i < n; ++i )
	{
		printf("%6.1f ",Notes[i]);
	}
	printf("\n");
	
	
}

float minimumNotes( float Notes[], int n)
{
	
	int i;
	float min = Notes[0];
	for( i = 0 ;i < n; ++i )
	{
		if( Notes[i] < min)
		{
			min = Notes[i];
		}
	}
	return(min);
	
}

float maximumNotes( float Notes[], int n)
{
	
	int i;
	float max = Notes[0];
	for( i = 0 ;i < n; ++i )
	{
		if( Notes[i] > max)
		{
			max = Notes[i];
		}
	}
	return(max);
	
}

float calculeMoyenne(float Notes[], int n)
{
	float moyenne = 0;
	int i;
	for( i = 0 ;i < n;  i++)
	{
		moyenne += Notes[i];
	}
	moyenne = moyenne / n;
	return(moyenne);
	
}

float calculeVariance(float Notes[], int n)
{
	float variance = 0;
	float moyenne;
	int i;
	moyenne = calculeMoyenne( Notes, n);
	for( i = 0 ;i < n;  ++i)
	{
		variance += pow( Notes[i] - moyenne, 2 );
	}
	variance /= n;
	return(variance);
}


float calculeEcartType(float Notes[], int n)
{
	return( sqrt(calculeVariance( Notes, n)));
	
}

int rechercherValeur(float Notes[], int n, float valeur)
{
	int position = -1;
	int i;
	for( i = 0 ;i < n;  ++i)
	{
		if (Notes[i] == valeur)
		{
			position = i;
		}
	}
	return(position);
	
}






















