#include <stdio.h>
#include <stdlib.h>
#include <math.h>






int fibonacci(int n, int un_2, int un_1)
{
	
	if( n > 1 )
	{		
		fibonacci(n - 1, un_1, un_1 + un_2);
	}	
	else
	{
		return(un_1);
	}
}

/*
int pgcd(int a,int b){
	int r;
	while (b!=0){
		r=a%b;
		a=b;
		b=r;
		}

	return(a);

}
*/


int pgcd(int a,int b){
	int r;

	r=a%b;
	a = b;
	b = r;
		
	if( b != 0)
	{
		pgcd(a,b);
	}
	else
	{
		return(a);
	}

	
}


/*
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
*/

int estPalindrome(char  *mot, int d, int f)
{
	int palin = 1;
	if ( mot[d] == mot[f] && d < f)
	{
		estPalindrome(mot, d + 1, f - 1) ;
	}
	else if ( mot[d] != mot[f] )
	{
		palin = 0;
	}
	return(palin);
	
}









