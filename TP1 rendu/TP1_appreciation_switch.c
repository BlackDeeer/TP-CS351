#include <stdio.h>

int main()
{
    char note;
    printf("Saisissez votre note:");
    scanf("%c",&note);

    switch (note)
    {
    case 'A':
        printf("Tres bien");
        break;
    case 'B':
        printf("Bien");
        break;
    case 'C':
        printf("Assez bien");
        break;
    case 'D':
        printf("Passable");
        break;
    case 'E':
        printf("Insuffisant");
        break;
    default:
        printf("Vous n'avez pas saisie votre note ! ( Note exprimee sous la forme d'une lettre de A a E ) ");
        break;
    }
    return (0);


}