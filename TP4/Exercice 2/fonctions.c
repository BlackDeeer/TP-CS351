#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int myStrlen(const char *ch)
{
	int i = 0;
	while( ch[i] != '\0' )
	{
		++i;
	}
	return(i);
	
}

void myStrcpy(char *copie,const char *ch)
{
	int size,i;
	size = myStrlen(ch);
	for( i = 0; i<size; ++i)
	{
		copie[i] = ch[i];
	}
	copie[size] = '\0';
	
}

void affichagerEnHexadecimal(char ch[])
{
	int size,i;
	size = myStrlen(ch);
	for( i = 0; i<size; ++i)
	{
		printf("%x ", ch[i]);
	}
	printf("\n");
}

void affichagerEnDecimal(char ch[])
{
	int size,i;
	size = myStrlen(ch);
	for( i = 0; i<size; ++i)
	{
		printf("%d ", ch[i]);
	}
	printf("\n");
}

void affichagerEnMajuscule(char ch[], char copie_ch_maj[])
{
	int size,i;
	size = myStrlen(ch);
	myStrcpy(copie_ch_maj,ch);
	for( i = 0; i<size; ++i)
	{
		if(  97 <= ch[i] && ch[i] <= 122 )
		{
			copie_ch_maj[i] -= 32;
		}

	}
}

void affichagerEnMinuscule(char ch[], char copie_ch_min[])
{
	int size,i;
	size = myStrlen(ch);
	myStrcpy(copie_ch_min,ch);
	for( i = 0; i<size; ++i)
	{
		if(  65 <= ch[i] && ch[i] <= 90 )
		{
			copie_ch_min[i] += 32;
		}
	}
}

void retournerMot(char ch[], char copie_ch_retourne[])
{
	int size,i,j;
	size = myStrlen(ch);
	for( i = 0; i<size; ++i)
	{
		j = size - i - 1;
		copie_ch_retourne[i] = ch[j];
	}	
	
}


int rechercherCaractereG(char ch[], char cara)
{
	int size,i;
	int fail = -1;
	size = myStrlen(ch);
	
	for( i = 0; i<size; ++i)
	{
		if( ch[i] == cara )
		{
			return(i);
		}
	}	
	return(fail);
}

int rechercherCaractereD(char ch[], char cara)
{
	int size,i;
	int fail = -1;
	size = myStrlen(ch);
	
	for( i = size; i >= 0; --i)
	{
		if( ch[i] == cara )
		{
			return(i);
		}
	}	
	return(fail);
}

int estPalindrome(char * mot, int d, int f)
{
	int palin = 1;
	while( d < f )
	{
		if( mot[d] == mot[f] )
		{
			d++;
			f--;
		}
		else
		{
			palin = 0;
			return(palin);
		}
	}
	return(palin);
}


int comparerChaine(char * ch1, char * ch2)
{
	int size,i;
	int valeur = 0;
	size = myStrlen(ch1);
	
	for( i = 0; i < size ; ++i)
	{
		if( ch1[i] > ch2[i])
		{
			valeur ++;
		}
		else if ( ch1[i] < ch2[i])
		{
			valeur --;
		}
	}	
	return(valeur);
}
	
int valeurDecimale(char * ch)
{
	int valeur = 0;
	int size,i,j;
	size = myStrlen(ch);
	
	for ( i = 0; i < size ; ++i)
	{
		j = size - i - 1;
		valeur += (ch[i] - '0' )*pow(10,j); 
        }
	
	return(valeur);
}

intVerChaine( int integer, char * ch )
{
	int valeur = 0;
	int size,i,j;
	
	for ( i = 0; i < size ; ++i)
	{
		j = size - i - 1;
		valeur += (ch[i] - '0' )*pow(10,j); 
        }
	
	return(valeur);
	
}








