#include "fonctions.h"



int main()
{
	float Notes[] = {12.0 , 13.5 , 8.5 , 14.7 , 6.0};
	int n = 5;
	float min, max , moyenne,variance, ecart_type, valeur;
	int position;
	
	afficherNotes( Notes, n);
	
	min = minimumNotes( Notes, n);
	printf("Minimum des notes : %6.1f\n",min);
	
	max = maximumNotes( Notes, n);
	printf("Maximum des notes : %6.1f\n",max);
	
	moyenne = calculeMoyenne( Notes, n);
	printf("Moyennes des notes : %6.2f\n",moyenne);
	
	variance = calculeVariance( Notes, n);
	printf("Variance des notes : %6.2f\n",variance);
	
	ecart_type = calculeEcartType( Notes, n);
	printf("Ecart type des notes : %6.2f\n",ecart_type);
	
	scanf("%f",&valeur);
	position = rechercherValeur( Notes, n, valeur);
	printf("Position de la valeur %6.2f : %d \n",valeur,position);
	
	return(0);
}



