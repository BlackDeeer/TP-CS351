
OPTION = -Wall -ansi -pedantic
	
all: fonctions.o main.o
	gcc -o main fonctions.o main.o 
	
fonctions.o : fonctions.h fonctions.c
	gcc -c fonctions.c $(OPTION) -o fonctions.o
	
main.o : main.c
	gcc -c main.c $(OPTION) -o main.o
clean: 
	rm *.o
	
zip:
	tar -zcvf Exercice1.tar.gz *.h *.c
	