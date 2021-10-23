#include <stdio.h>
#include <stdlib.h>
#include "listeTableau.h"

#define TAILLEMAX 100

int main()
{
	/* déclaration du tableau contenant la liste */
	element maListe[TAILLEMAX];

	creerListeVide(maListe);
	
	maListe[0].suivant = 3;
	maListe[3].valeur = 3;
	maListe[3].suivant =1;
	maListe[1].valeur = 4;
	maListe[1].suivant = 0;
	
	printf("Premier element libre a l'indice: %d\n", elementLibre(maListe));
	
	
	
	insererElement(3, maListe); /* Insertion d'un élément au milieu de la liste*/
	insererElement(4, maListe); /* Insertion d'un élément à la fin de la liste*/
	insererElement(12, maListe);
	insererElement(3, maListe); /* Insertion d'un élément déjà présent*/
	

	/* ... */
	printf("Representation de la liste:\n");
	afficherListe(maListe);
	
	supprimerElement(2, maListe); /* Suppresion d'un élément au milieu de la liste*/
	supprimerElement(19, maListe);/* Suppresion d'un élément qui n'existe pas*/
	printf("Representation de la liste:\n");
	afficherListe(maListe);
	
	supprimerElement(6, maListe); /* Suppresion d'un élément à la fin de la liste*/
	supprimerElement(1, maListe); /* Suppresion d'un élément au début de la liste*/
	printf("Representation de la liste:\n");
	afficherListe(maListe);

	return 0;
}
