BIN = Executable
OBJ = main.o listeTableau.o
CC = gcc
CFLAGS = -Wall -ansi -pedantic

all: $(OBJ)
	mkdir -p exe		
	$(CC) obj/*.o -o exe/$(BIN)

main.o: main.c listeTableau.h
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o obj/$@

listeTableau.o: listeTableau.c listeTableau.h
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o obj/$@

clean:
	rm -r exe
	rm -r obj
