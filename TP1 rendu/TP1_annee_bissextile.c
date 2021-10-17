#include <stdio.h>

int main()
{   
    /* Méthode pour savoir si une année est bissextile:
    Si l'année n'est pas divisible par 4, l'année n’est pas bissextile.
    Si l'année est divisible par 4, l'année est bissextile sauf si l'année est divisible par 100 et pas par 400. 
    
    Valeurs de test:
    1988, 1992, 1600, 2000 sont des années bissextile 
    1900, 2001, 2100, 2600 ne sont pas des années bissextile */

    int annee;
    printf("Saisissez une annee:");
    scanf("%d",&annee);

    if (annee % 4 != 0)
    {
        printf("L'annee %d n'est pas bissextile.", annee);
    }

    else if (annee % 100 == 0 && annee % 400 != 0)
    {
        printf("L'annee %d n'est pas bissextile.", annee);
    }

    else
    {
        printf("L'annee %d est bisextile.",annee);
    }


    return(0);
}