all: magman

magmanx: Speakable.o
	g++ main.cpp Speakable.o -o magman

magman: moveable.o Speakable.o vulnerable.o Attackable.o
	g++ -std=c++11 main.cpp moveable.o Speakable.o vulnerable.o Attackable.o -o magman
	
Attackable.o: Attackable/Attackable.cc
	g++ -std=c++11 -c Attackable/Attackable.cc

moveable.o: Moveable/moveable.cpp
	g++ -c Moveable/moveable.cpp

Speakable.o: Speakable/Speakable.cc
	g++ -c -std=c++11 Speakable/Speakable.cc
	
vulnerable.o: vulnerable/vulnerable.cpp
	g++ -c vulnerable/vulnerable.cpp
	
clean: 
	rm -rf *.o magman