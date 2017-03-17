
programa: main.o operaciones.o
	g++ main.o operaciones.o -o programa

main.o: main.cpp operaciones.h
	g++ -c main.cpp



operaciones.o: operaciones.cpp operaciones.h
	g++ -c 	operaciones.cpp


.PHONY: clean

clean:
	$(RM) *.o
