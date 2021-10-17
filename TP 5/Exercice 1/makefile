
OPTION = -Wall -ansi -pedantic
	
all: Fraction.o main.o
	gcc -o main Fraction.o main.o -lm
	
fonctions.o : Fraction.h Fraction.c
	gcc -c Fraction.c $(OPTION) -o Fraction.o
	
main.o : main.c
	gcc -c main.c $(OPTION) -o main.o
clean: 
	rm *.o
	
zip:
	tar -zcvf Exercice1.tar.gz *.h *.c
	