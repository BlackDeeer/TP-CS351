#include "fonctions.h"



int main()
{
	
	int n = 2;
	int m = 3;
	/*
	prinft("Veuillez entré les dimensions de la matrice:");
	scanf("%f",&n);
	scanf("%f",&m); */
	
	
	
	int M[2][3];
	int M_2[2][3];
	int M_add[2][3];
	int M_trans[3][2];
	int M_trans_2[3][2];
	int M_prod[2][2];
	initialiseMatrice(M, 2, 3);
	afficherMatrice(M, 2, 3);
	initialiseMatrice(M_2, 2, 3);
	afficherMatrice(M_2, 2, 3);
	additionnerMatrice( M, M_2,M_add, 2, 3);
	afficherMatrice(M_add, 2, 3);
	transposee(M, M_trans,n, m);
	afficherMatriceTrans(M_trans, m, n);
	transposee(M_2,M_trans_2,n,m);
	produitMatriciel(M, M_trans_2,M_prod,n,  m);
        afficherMatriceProd(M_prod,  n,  n);
	return(0);
}



