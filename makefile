all: list tester
	g++ -g -Wall -o tester tester.o List.o
tester:
	g++ -c tester.cpp
list: List.h
	g++ -c List.cpp
clean:
	rm -r *.o tester
