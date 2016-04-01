all: main

main: main.o moveable.o
	g++ main.o moveable.o -o main

main.o: main.cpp
	g++ -c main.cpp
	
moveable.o: moveable.cpp
	g++ -c moveable.cpp

clean:
	rm -rf *.o main