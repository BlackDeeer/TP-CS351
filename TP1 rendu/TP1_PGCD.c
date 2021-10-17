#include <stdio.h>

/*
Ensemble de triplet à tester:
(24, 36, 12)
(221, 782, 17)
(1078, 322, 14)
(252,360,36)


*/

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