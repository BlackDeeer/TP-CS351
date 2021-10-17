#include <stdio.h>


int factorielle(int n)
{
    int a = 1;
    for(int i = 1; i <= n; ++i)
    {
        a *= i;
    } 
    return(a);

}

int factorielleBis(int m)
{
    int n = 0;
    int a = 1;

    while(a <= m)
    {   
        ++n;
        a *= n;
    }

    return(n);
}

/*
Pour tester la fonction factorielle, on peut prendre 10 et on doit avoir 3 628 800 en retour
Pour tester la fonction factorielle bis, on peut prendre 200 000 000 et on doit avoir 12 en retour
*/


int main()
{
    int m,n,n2,n_fact,n_fact2;
    scanf("%d",&n);
    n_fact = factorielle(n);
    printf("Voici le resulat de !%d : %d \n",n,n_fact);

    scanf("%d",&m);
    n2 = factorielleBis(m);
    n_fact2 = factorielle(n2);
    printf("On a %d tel que %d! (=%d) soit superieur a %d",n2,n2,n_fact2,m);

}