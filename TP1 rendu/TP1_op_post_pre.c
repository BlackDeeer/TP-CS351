#include <stdio.h>

/* 
Pour bien comprendre comment fonctionnent les opérateurs ++ et --, exécuter et commenter
le programme suivant (assurez-vous d’avoir bien compris !) :

 Les opérateurs de post et pré incrémentation et décrémentation ont des fonctionnement différents. Prenons le cas de l'incrémentation. 

 L'opérateur de pré incrémentation, c'est à dire, ++j, est une opération qui est exécuté en premier avant l'instruction. Ainsi, la nouvelle valeur de ++j est calculé avant l'instruction, c'est à dire, avant d'être affiché par un printf.


 Alors que l'opérateur de post incrémentation ( i++ ) s'exécute après l'instruction. La valeur de i utilisée dans l'instruction n'est pas incrémenté au moment de l'affichage. L'incrémentation n'a lieu qu'après l'instruction. La nouvelle valeur de i
 ne prend effet qu'à l'instruction suivante. 

*/


int main() 
{
    int i, j, k, l;
    i = j = k = l = 0;
    while(i < 9) 
    {
        printf("i++ = %d, ++j = %d, k-- = %d, --l = %d\n",
        i++, ++j, k--, --l);
    }
    printf ("i = %d, j = %d, k = %d, l = %d\n", i, j, k, l);
    return (0);
}
