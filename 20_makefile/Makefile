IDIR=../include
CC = g++
CFLAGS = -g -I $(IDIR)
ODIR=

//Estudiar variable implicitas y automaticas (CC(Varialble cuando compilamos en C), CXX(cuando compilamos en c++), RM(Borrado de rm -f), LDFLAGS(Son las opciones para al linker, como cuando ponemos -lncurses), $^(Son todas las dependencias), $<(Hacer referencia a la primera dependencia), )

DEPS = imprime.h //Lo ponemos para no repetir.
OBJS = imrpime.o main.o // lo ponemos para no repetir código. Añadimos todos los .objetos que tengamos. 

el2: $(OBJS)
	$(CC) $^ -o el2 $(CFLAGS)

%.o: %.cpp $(DEPS)
	$(CC) -c $< $(CFLAGS)

.PHONY: clean

clean:
	$(RM) *.o

dist: clean 
	mv el2 ./dist

// Para con figurar cualquier archivo usamos ./configure 'Sirve para todos los programas' y hace un archivo makefile y despues ponemos make para compilar el programa. Despues makeinstall que copia el ejecutable al sistema operativo.(con esto instalamos todo).