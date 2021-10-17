BIN = Executable
OBJ = main.o fonctions.o
CC = gcc
CFLAGS = -Wall -ansi -pedantic

all: $(OBJ)
	mkdir -p exe		
	$(CC) obj/*.o -o exe/$(BIN) -lm

main.o: main.c fonctions.h
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o obj/$@

fonctions.o: fonctions.c fonctions.h
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o obj/$@

run: all
	./exe/$(BIN)

clean:
	rm -r exe
	rm -r obj
