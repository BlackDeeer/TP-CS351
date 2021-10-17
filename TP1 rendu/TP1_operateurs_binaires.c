#include <stdio.h>

int main() 

/* 

L’opérateur & donne 1 si les deux bits de la paire sont à 1. Donc on a (010 == 2) & (011 == 3) = (010 == 2) 
L'opérateur | donne 1 si au moins un des deux bits de la paire est à 1. Donc on a par exemple (100 == 4) | (011==3) = (111= 7)
Ses opérateurs sont des opérateurs bit à bit

L'opérateur logique || est un OU logique ou OU inclusif. Au moins une des expréssions doit être vrai pour que le if soit vrai. Ici i&k = 0 donc cette expression est fausse mais i&j = 2 est vrai car non nul.
*/


{
    int i = 2, j = 3, k = 4;
    printf("%d, %d, %d\n", i & j, i | 1, k | j);

    if ((i & k) || (i & j))
        printf("ok");

    return (0);
}