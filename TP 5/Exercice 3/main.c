#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int main()
{
	int j,a,b,c,resultat;
	char str[100];
	
	
	pileInt maPile = creerPile();
	
	scanf("%99[^\n]s",str);
	
	
	while(str[j] != '\0')
	{
		switch(str[j])
		{
			
			case '+':
				a = depiler(maPile);
				b = depiler(maPile);
				c = a + b;
				empiler(maPile,c);	
				break;
			
			case '-':
				a = depiler(maPile);
				b = depiler(maPile);
				c = b - a;
				empiler(maPile,c);	
				break;
			case 'x':
				a = depiler(maPile);
				b = depiler(maPile);
				c = a * b;
				empiler(maPile,c);	
				break;
			case '/':
				a = depiler(maPile);
				b = depiler(maPile);
				c = b / a;
				empiler(maPile,c);	
				break;
			default :
				empiler(maPile, (int)str[j] - 48); 
		}
		j += 2;
	}
	
	
	resultat = depiler(maPile);
	printf("Je depile mon resultat : %d\n", resultat);
	while (!estPileVide(maPile))
	{
	printf("Je depile : %d\n", depiler(maPile));
	}


	return 0;
}

