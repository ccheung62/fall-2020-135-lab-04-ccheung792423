main: main.o funcs.o shapes.o
	g++ -o main main.o funcs.o

funcs.o: funcs.cpp funcs.h
	g++ -c funcs.cpp

shapes.o: shapes.cpp shapes.h
	g++ -c shapes.cpp

main.o: main.cpp funcs.h shapes.h
	g++ -c main.cpp

clean:
	rm -f main.o funcs.o shapes.o
