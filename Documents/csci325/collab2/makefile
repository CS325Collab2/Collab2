CC = g++

CFLAGS = -c -Wall

library: main.o library.o movie.o
	$(CC) main.o library.o movie.o -o library

main.o: main.cpp library.h
	$(CC) main.cpp $(CFLAGS)

library.o: movie.h library.cpp
	$(CC) library.cpp  $(CFLAGS)

movie.o: movie.cpp movie.h
	$(CC) movie.cpp  $(CFLAGS)

clean:
	rm *.o library  *~
