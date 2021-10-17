#include <stdio.h>
#include <stdlib.h>

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

void affichagerEnHexadecimal(char *ch,unsigned char *hexa[20])
{
	int size,i;
	size = myStrlen(ch);
	
	
}
