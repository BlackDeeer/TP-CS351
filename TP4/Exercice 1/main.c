#include "fonctions.h"

int main(int argc, char * argv[])
{
	
	int T[1000];
	int nb;
	
	nb = lireDonnees(argv[1], T);
	afficherTableau(T, nb);
	triABulles(T, nb);
	afficherTableau(T, nb);
	enregistrerDonnees(argv[2], T, nb);
	return(0);
	
	
}



