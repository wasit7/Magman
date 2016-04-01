all: main

main: main.o Speakable.o
	g++ -std=c++11 main.o Speakable.o -o main

main.o: main.cc
	g++ -c -std=c++11 main.cc
	
Speakable.o: Speakable.cc
	g++ -c -std=c++11 Speakable.cc

clean:
	rm -rf *.o main