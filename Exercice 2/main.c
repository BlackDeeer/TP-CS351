#include "fonctions.h"

int main(int argc, char * argv[])
{
	int size = 0 ;
	char ch[100] = "bonjour les sang" ;
	char copie_ch[100];
	unsigned char hexa[100];
	size = myStrlen( ch );
	myStrcpy(copie_ch,ch);
	affichagerEnHexadecimal(ch, hexa);
	
	printf("Taille de la chaine de caractere : %d\n",size);
	printf("Copie de la chaine de caractere: %s\n",copie_ch);
	printf("Chaine de caractere en hexadecimal: %s\n",hexa);

	return(0);
	
	
}



