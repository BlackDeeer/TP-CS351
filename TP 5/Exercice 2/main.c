#include "polynome.h"




int main(int argc, char* argv[])
{
	int i = 0;


	Polynome p1;
	Polynome p2;
	Polynome res;
	
	
	creerPoly(p1);
	creerPoly(p2);
	
	
	addPolynomes(p1, p2, res);
	
	
	printf("Le resultat de l'addition du polynome 1 et 2 est :\n");
	while( res[i].degre >= 0 )
	{
		printf("%6.2f x^%d +", res[i].coeff , res[i].degre);
		i++;
	}
	
	
	return(0);
}