all: magman

magman: moveable.o Speakable.o vulnerable.o
	g++ main.cpp moveable.o Speakable.o vulnerable.o -o magman

movable.o: movable.cpp
	g++ -c Movable/movable.cpp
	
Speakable.o: Speakable.cc
	g++ -c -std=c++11 Speakable.cc
	
vulnerable.o: vulnerable.cpp
	g++ -c vulnerable.cpp
	
clean: 
	rm *.o magman
