PROG = Biblioteca
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic
OBJS = main.o biblioteca.o midia.o dvd.o cd.o livro.o
SRC = src/
BUILD = build/
BIN = bin/


$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o bin/$(PROG)
	mv *o $(BUILD)

main.o :
	$(CC) $(CPPFALGS) -c $(SRC)/main.cpp

biblioteca.o : include/biblioteca.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/biblioteca.cpp

midia.o : include/midia.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/midia.cpp

livro.o : include/livro.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/livro.cpp

cd.o : include/cd.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/cd.cpp

dvd.o:	include/dvd.hpp
	$(CC) $(CPPFLAGS) -c $(SRC)/dvd.cpp

clean:
	rm -f $(BUILD)/*.o
	rm -f $(BIN)/*
