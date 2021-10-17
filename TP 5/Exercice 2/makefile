
OPTION = -Wall -ansi -pedantic
	
all: polynome.o main.o
	gcc -o main polynome.o main.o -lm
	
fonctions.o : polynome.h polynome.c
	gcc -c polynome.c $(OPTION) -o polynome.o
	
main.o : main.c
	gcc -c main.c $(OPTION) -o main.o
clean: 
	rm *.o
	
zip:
	tar -zcvf Exercice1.tar.gz *.h *.c
	