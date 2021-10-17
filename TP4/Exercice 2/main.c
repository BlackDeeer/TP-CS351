#include "fonctions.h"

int main(int argc, char * argv[])
{
	int size = 0 ;
	int position, palin;
	char ch[100] = "Bonjour" ;
	char mot[100] = "eluparcettecrapule";
	char ch1[100] = "toto";
	char ch2[100] = "titi";
	char ch3[100] = "289283";
	char caractere_gauche = 'o';
	char caractere_droite = 'o';
	char copie_ch[100];
	char copie_ch_maj[100];
	char copie_ch_min[100];
	char copie_ch_retourne[100];
	size = myStrlen( ch );
	myStrcpy(copie_ch,ch);
	
	
	printf("Taille de la chaine de caractere : %d\n",size);
	printf("Copie de la chaine de caractere: %s\n",copie_ch);
	printf("Chaine de caractere en hexadecimal: ");
	affichagerEnHexadecimal(ch);
	printf("Chaine de caractere en decimal: ");
	affichagerEnDecimal(ch);
	affichagerEnMajuscule(ch, copie_ch_maj);
	printf("Chaine de caractere en majuscule: %s \n",copie_ch_maj);
	affichagerEnMinuscule(ch, copie_ch_min);
	printf("Chaine de caractere en minuscule: %s \n",copie_ch_min);
	retournerMot(ch, copie_ch_retourne);
	printf("Chaine de caractere a l'envers: %s \n",copie_ch_retourne);
	position = rechercherCaractereG(ch, caractere_gauche);
	printf("Indice de la premiere occurence du caractere '%c' dans '%s' a partir de la gauche : %d \n",caractere_gauche,ch,position);
	position = rechercherCaractereD(ch, caractere_droite);
	printf("Indice de la premiere occurence du caractere '%c' dans '%s' a partir de la droite : %d \n",caractere_droite,ch,position);
	palin = estPalindrome(mot, 0, 17);
	printf("Est ce que %s est un palindrome ( 1: oui / 2:non ): %d \n",mot,palin);
	printf("Comparaison entre %s et %s : %d \n",ch1,ch2,comparerChaine(ch1,  ch2));
	printf("Valeur decimal de %s : %d\n",ch3, valeurDecimale(ch3));

	return(0);
	
	
}



