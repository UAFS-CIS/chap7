# #########################
# Static Library and Linking
# #########################
CC=gcc

myprog: myprog.c libmylib.a 
	$(CC) myprog.c -L. -lmylib -o myprog

sum.o:	sum.c mylib.h
	$(CC) -c sum.c -o sum.o

show.o: show.c mylib.h
	$(CC) -c show.c -o show.o

# Create Static Library

libmylib.a: show.o sum.o
	    ar rs libmylib.a sum.o show.o


clean:
	rm myprog
	rm libmylib.a
	rm sum.o
	rm show.o
	
