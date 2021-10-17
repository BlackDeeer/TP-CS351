#include <stdio.h>
#include <stdlib.h>

int quotient(int a, int b)
{
	int sous = a;
	int q = 0;
	
	while(sous -b>= 0)
	{
		sous = sous - b;
		++q;
	}
	return(q);
}

int reste(int a, int b){
	return(a - quotient(a,b) * b);
}

int valeurAbsolue(int c)
{
	return(abs(c));
}

int PGCD(int a, int b)
{
    // Division euclidienne pour trouver le PGCD 
    int r;
    int R_NULL = 0;
    r = 0;
    
    while(R_NULL == 0)
    {   
        r = a % b;
        if (r != 0)
        {
            a = b;
            b = r;
        }
        else
        {
            R_NULL = 1;
        } 
    }
    
    return(b);
}

int ppcm(int a,int b)
{	
	int ab, a_abs, b_abs;
	a_abs = valeurAbsolue(a);
	b_abs = valeurAbsolue(b);
	ab = a_abs*b_abs;


	return( quotient( ab, PGCD(a,b)));


}

int puissanceMB (int x, int n)
{
	int N, Y, Z, N_parite;
	int operation = 0;
	int loop = 1;
	N = n;
	Y = 1;
	Z = x;
	
	while(loop == 1)
	{
		
	
		N_parite = N%2; 
		N = N/2;
		++operation;
		
		while( N_parite == 0)
		{
			
			Z = Z*Z;
			++operation;
			N_parite = N%2; 
			N = N/2;
			++operation;
			

		}
		
		Y = Z*Y;
		++operation;
		if( N == 0)
		{
			printf("%d operations \n",operation);
			return(Y);
			loop = 0;
		}
		Z = Z*Z;
		++operation;
	}
	

}


int sommeDesImpairs(int d, int f)
{
	int somme = 0;
	int n = 0;
	if(d < f && d%2 == 1 && f%2 == 1)
	{
		while ( (d + 2*n) <= f )
		{
			somme += d + 2*n;
			++n;
		}
		return(somme);
	}
	else
	{
		printf("Les parametres de la fonction sont pas bon\n");
	}
}

int UneDecompositonDe (int d, int f)
{

	
}


int main()
{
	/*
	int c;
	int a = 20;
	int b = 5;
	c = quotient(a,b);
	printf("quotient : %d\nreste : %d\n",c,reste(a,b));   */
	
	/*
	int d ;
	d = puissanceMB(7,5);
	printf("Le resultat est %d\n",d);
	*/

	int d,f,somme;
	d = 3;
	f = 7;
	somme = sommeDesImpairs(d,f);
	printf("La somme est %d",somme);
	return(0); 




	
}