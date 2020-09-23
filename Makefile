main: main.o funcs.o
	g++ -o main main.o funcs.o

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

main.o: main.cpp funcs.h
	g++ -c main.cpp

clean:
	rm -f main.o funcs.o
