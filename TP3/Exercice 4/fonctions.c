#include <stdio.h>
#include <math.h>




void initialiseMatrice(int M[2][3], int n, int m)
{
	
	int i,j;
	int valeur = 0;
	printf("Initialisation de la matrice:\n");
	for( i = 0; i <n; ++i)
	{
		for( j= 0; j<m; ++j)
		{
			printf("[%d][%d]=",i,j);
			scanf("%d",&valeur);
			M[i][j] = valeur;
		}
	}
}


void afficherMatrice(int M[2][3], int n, int m)
{
	int i,j;
	printf("Affichage de la matrice:\n");
	for(i = 0 ; i < n ; i++)
	{
		printf("\n");
		for(j = 0 ; j < m; j++)
		{
			printf("%d ", M[i][j]);
		}
	}
	printf("\n");
} 

void additionnerMatrice(int M[2][3], int M_2[2][3], int M_add[2][3],int n, int m)
{
	int i,j;
	printf("Addition de deux matrices:\n");
	for( i = 0; i <n; ++i)
	{
		for( j= 0; j<m; ++j)
		{
			M_add[i][j] = M[i][j] + M_2[i][j];
		}
	}
	
}

void transposee(int M[2][3], int M_trans[3][2],int n, int m)
{
	int i,j;
	for( i = 0; i <n; ++i)
	{
		for( j= 0; j<m; ++j)
		{
			M_trans[j][i] = M[i][j]; 
		}
	}
	
}

void afficherMatriceTrans(int M[3][2], int n, int m)
{
	int i,j;
	printf("Affichage de la matrice transpose:\n");
	for(i = 0 ; i < n ; i++)
	{
		printf("\n");
		for(j = 0 ; j < m; j++)
		{
			printf("%d ", M[i][j]);
		}
	}
	printf("\n");
} 

void produitMatriciel(int M[2][3], int M_trans[3][2],int M_prod[2][2],int n, int m)
{
	int i,j,k;
	printf("Addition de deux matrices:\n");
	for( i = 0; i <n; ++i)
	{
		for( j= 0; j<m; ++j)
		{
			M_prod[i][j] = 0;
			for( k =0; k<m; ++k)
			{
				M_prod[i][j] += M[i][k]*M_trans[k][j];
			}
		}
	}
}


void afficherMatriceProd(int M[2][2], int n, int m)
{
	int i,j;
	printf("Affichage du produit matricielle M*M_2:\n");
	for(i = 0 ; i < n ; i++)
	{
		printf("\n");
		for(j = 0 ; j < m; j++)
		{
			printf("%d ", M[i][j]);
		}
	}
	printf("\n");
} 














