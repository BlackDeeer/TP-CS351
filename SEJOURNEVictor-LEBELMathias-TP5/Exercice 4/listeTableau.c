/*********************************************************************/
/* Realisation d'une liste chainee dans un tableau                   */
/* ioannis.parissis@grenoble-inp.fr                                  */
/* Sep 2012                                                          */
/*********************************************************************/
#include "listeTableau.h"


int elementLibre(liste l){
	int i = 0;
	int non_libre = 1;

	while(non_libre)
	{
		if(l[i].suivant == -1 )
		{
			non_libre = 0;
		}
		else
		{
			i++;
		}
	}
	return(i);
}

void creerListeVide(liste l){
/* Initialise le tableau de sorte que tous les éléments soient libres (suivant = -1)
   sauf celui d'indice 0 où suivant == 0*/
	int i = 0;
	l[0].suivant = 0;
	for ( i = 1; i < TAILLEMAX; ++i)
	{
		l[i].suivant = -1;
	}
}


void insererElement(int x, liste l){
	int indice = l[0].suivant;
	int indice_x;
	int indice_avant;
	indice_x = elementLibre(l);
	while( indice != 0 )
	{
		indice_avant = indice;
		indice = l[indice].suivant;
	}
	l[indice_avant].suivant = indice_x;
	l[indice_x].valeur = x;
	l[indice_x].suivant = 0;
}

void supprimerElement(int x, liste l){
	
	int indice = l[0].suivant;
	int indice_avant;
	while( indice != x && indice != 0 )
	{
		indice_avant = indice;
		indice = l[indice].suivant;
	}
	if( indice != 0 )
	{
		l[indice_avant].suivant = l[x].suivant ;
		l[x].suivant = - 1;
		l[x].valeur = 0;
	}
	else
	{
		printf("Erreur: suppresion de l'indice %d qui n'existe pas\n",x);
	}
}

void afficherListe(liste l){
	int indice = l[0].suivant;
	
	while( indice != 0 )
	{
		printf("valeur de l'indice %d : %d --- %d \n",indice, l[indice].valeur, l[indice].suivant); 
		indice = l[indice].suivant;
	}
	
}
