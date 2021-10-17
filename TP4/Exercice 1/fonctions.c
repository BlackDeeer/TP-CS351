#include <stdio.h>
#include <stdlib.h>

int lireDonnees(char nomFichier[], int T[])
{
	FILE * fic;
	int entier;
	int i = 0;
	/* Ouverture du fichier */
	fic = fopen(nomFichier, "r");
	if(fic == NULL) 
	{
		perror("Probleme ouverture fichier");
		exit(1);
	}
	
	/* Lecture dans le fichier */
	while(!feof(fic)) 
	{
		fscanf(fic, "%d", &entier);
		T[i]= entier;
		++i;
	}
	
	/* Fermeture du fichier */
	fclose(fic);
	return(i);
	
}


void afficherTableau(int T[], int nb)
{
	int i = 0;
	for ( i = 0; i<nb; i++)
	{
		printf("%d ",T[i]);
	}
	printf("\n");
}

void triABulles(int T[], int nb)
{
	int i,j,k;
	int nb_echange = 0;
	for( i = nb; i >= 1; i--)
	{
		int tableauTrier = 1;
		for( j=0;j< i - 1 ;j++)
		{
			if( T[j] >T[j+1])
			{
				k = T[j+1];
				T[j+1] = T[j];
				T[j] = k;
				tableauTrier = 0;
				nb_echange ++;
			}
		}
		if( tableauTrier == 1)
		{
			i = 0;
		}
	}
	printf("operations : %d\n",nb_echange );
}


void enregistrerDonnees(char nomFichier[], int T[], int nb)
{
	
	FILE * fic;
	int i = 0;
	/* Ouverture du fichier */
	fic = fopen(nomFichier, "w");
	if(fic == NULL) 
	{
		perror("Probleme ouverture fichier");
		exit(1);
	}
	
	/* Ecriture dans le fichier */
	
	for( i = 0; i < nb; i++)
	{
		fprintf(fic, "%d\n", T[i]);
	}
	
	/* Fermeture du fichier */
	fclose(fic);
	
	
	
}
