#include "fonctions.h"

int main(int argc, char * argv[])
{
	
	
	int a,b,pgcd_res,palin,n,res;
	int choix = 0;
	int un_2 = 0;
	int un_1 = 1;
	char mot[100] = "eluparcettecrapule";
	
	do {
		printf("\nPour calculer un pgcd : entrez 1\n"
			"Pour calculer une suite de fibonacci : entrez 2\n"
			"Pour verifier une palindrome : entrez 3\n"
			"Pour quitter : entrez 0\n"
		);
		scanf("%d", &choix);
		
		if (choix == 1) {

			printf("PGDC(a,b)\nEntrez a et b:\n");
			scanf("%d %d",&a, &b);
			pgcd_res = pgcd(a,b);
			printf("PGDC(%d,%d) = %d",a,b,pgcd_res);
		}
		
		if (choix == 2) {
			printf("Quelle est la valeur de n (n > 0):\n");
			
			do{
			scanf("%d",&n);
			}while(n<0);

			res = fibonacci(n, un_2, un_1);
			printf("u%d = %d\n",n,res);
		}
		
		if (choix == 3) {
			palin = estPalindrome(mot, 0, 17);
			printf("Est ce que %s est un palindrome ( 1: oui / 2:non ): %d \n",mot,palin);
		} 
		
	}
	while (choix != 0);

	
	return(0);
	
	
}



