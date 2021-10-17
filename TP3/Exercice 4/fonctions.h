#include <stdio.h>
#include <stdlib.h>


void initialiseMatrice(int M[2][3], int n, int m);
void afficherMatrice(int M[2][3], int n, int m);
void additionnerMatrice( int M[2][3], int M_2[2][3], int M_add[2][3],int n, int m);
void transposee(int M[2][3], int M_trans[3][2],int n, int m);
void afficherMatriceTrans(int M[3][2], int n, int m);
void produitMatriciel(int M[2][3], int M_trans[3][2],int M_prod[2][2],int n, int m);
void afficherMatriceProd(int M[2][2], int n, int m);