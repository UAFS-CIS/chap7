prog:	prog.c array.o
	gcc prog.c array.o -o prog

array.o:	array.c array.h
	gcc array.c -c -o array.o

clean:
	rm array.o
	rm prog
