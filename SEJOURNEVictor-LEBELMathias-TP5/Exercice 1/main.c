#include "Fraction.h"




int main(int argc, char* argv[])
{
	
	Fraction fa, fb;
	char operation;
	
	printf("Entrer deux fractions et une operation (+, -, /, *):");
	scanf("%d/%d %d/%d %c", &fa.num, &fa.den, &fb.num, &fb.den, &operation);

	switch(operation)
	{
		case ('+'):
			addFraction(fa, fb);
			break;
		case ('-'):
			subFraction(fa, fb);
			break;
		case ('*'):
			mulFraction(fa, fb);
			break;
		case ('/'):
			divFraction(fa, fb);
			break;
		default: 
			printf("Operation non reconnue");
			break;
	}
	
	
	

	
	return(0);
}