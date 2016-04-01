all: magman

magman: moveable.o Speakable.o vulnerable.o
	g++ main.cpp moveable.o Speakable.o vulnerable.o -o magman

moveable.o: Moveable/moveable.cpp
	g++ -c Moveable/moveable.cpp

Speakable.o: Speakable.cc
	g++ -c -std=c++11 Speakable.cc
	
vulnerable.o: vulnerable/vulnerable.cpp
	g++ -c vulnerable/vulnerable.cpp
	
clean: 
	rm *.o magman