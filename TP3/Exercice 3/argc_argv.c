#include <stdio.h>
/*
./argc_argv A B C
Nombre d'arguments : 4
C
B
A

Le programme affiche le nombre d'arguments et la liste des arguments dans le sens décroissant
sans l'argument du nom du fichier.
*/


int main(int argc, char * argv[])
{
	int i;
	printf("Nombre d'arguments : %d\n", argc);
	for(i = argc-1 ; i > 0 ; i--)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}