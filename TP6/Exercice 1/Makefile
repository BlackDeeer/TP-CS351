BIN = Executable
OBJ = main.o pile.o
CC = gcc
CFLAGS = -Wall -ansi -pedantic -g

all: $(OBJ)
	mkdir -p exe		
	$(CC) obj/*.o -o exe/$(BIN)

main.o: main.c pile.h
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o obj/$@

pile.o: pile.c pile.h
	mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o obj/$@

clean:
	rm -r exe
	rm -r obj
debug:
	ddd exe/$(BIN)