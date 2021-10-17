#include <stdio.h>
/*#include "MISEAUPOINT.h"*/

#ifdef MISEAUPOINT
	int option = 1;
#else
	int option = 0 ;
#endif


/*
Ensemble de triplet à tester:
(24, 36, 12)
(221, 782, 17)
(1078, 322, 14)
(252,360,36)


*/

int PGCD(int a, int b)
{
    /* Division euclidienne pour trouver le PGCD */
    int r, r_avant;
    r = 0;
    
    while(b != 0)
    {
        r_avant = r;
        r = a % b;
        a = b;
        b = r;
	    
	if (option==1){
		printf("valeur de b : %d \n", b);
	}
    }
    
    return(r_avant);
}

int main()
{
    int a,b,r;
    printf("Entrez les valeurs des deux valeurs entieres: \n");

    scanf("%d",&a);
    scanf("%d",&b);

    r = PGCD(a,b);
    printf("%d",r);
    return(0);
    

}