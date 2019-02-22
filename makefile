CFLAGS= -Wall -Wextra -DDEBUG -g -std=c++14 

all: program1

program1: List.o Star.o Planet.o Vector.o program1.o
	g++ $(CFLAGS) List.o Star.o Planet.o Vector.o program1.o -o program1


List.o: List.cpp List.h
	g++ $(CFLAGS) -c List.cpp

Star.o: Star.cpp Star.h
	g++ $(CFLAGS) -c Star.cpp

Planet.o: Planet.cpp Planet.h
	  g++ $(CFLAGS) -c Planet.cpp

Vector.o: Vector.cpp Vector.h
	  g++ $(CFLAGS) -c Vector.cpp

program1.o: program1.cpp  List.cpp Star.cpp Planet.cpp Vector.cpp List.cpp Star.h Planet.h Vector.h
	g++ $(CFLAGS) -c program1.cpp

clean:
	rm -rf program1
