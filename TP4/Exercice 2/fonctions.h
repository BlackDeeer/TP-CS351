#include <stdio.h>
#include <stdlib.h>

int myStrlen(const char *ch);
void myStrcpy(char *copie,const char *ch);
void affichagerEnHexadecimal(char ch[]);
void affichagerEnDecimal(char ch[]);
void affichagerEnMajuscule(char ch[], char copie_ch_maj[]);
void affichagerEnMinuscule(char ch[], char copie_ch_min[]);
void retournerMot(char ch[], char copie_ch_retourne[]);
int rechercherCaractereG(char ch[], char cara);
int rechercherCaractereD(char ch[], char cara);
int estPalindrome(char * mot, int d, int f) ;
int comparerChaine(char * ch1, char * ch2);
int valeurDecimale(char * ch);
intVerChaine( int integer, char * ch );
