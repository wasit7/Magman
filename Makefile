all: magmanx

magmanx: Speakable.o
	g++ main.cpp Speakable.o -o magman

magman: moveable.o Speakable.o vulnerable.o
	g++ main.cpp moveable.o Speakable.o vulnerable.o -o magman

moveable.o: Moveable/moveable.cpp
	g++ -c Moveable/moveable.cpp

Speakable.o: Speakable/Speakable.cc
	g++ -c -std=c++11 Speakable/Speakable.cc
	
vulnerable.o: vulnerable/vulnerable.cpp
	g++ -c vulnerable/vulnerable.cpp
	
clean: 
	rm -rf *.o magman