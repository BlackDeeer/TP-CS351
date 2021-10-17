#include <stdio.h>

int main()
{
    char note;
    printf("Saisissez votre note:");
    scanf("%c",&note);
    
    if (note == 'A' )
    {
        printf("Tres bien");
    }
    
    else if (note == 'B' )
    {
        printf("Bien");
    }    

    else if (note == 'C' )
    {
        printf("Assez bien");
    }

    else if (note == 'D' )
    {
        printf("Passable");
    }

    else if (note == 'E' )
    {
        printf("Insuffisant");
    }

    else
    {
        printf("Vous n'avez pas saisie votre note ! ( Note exprimee sous la forme d'une lettre de A a E ) ");
    }
    return(0);

}