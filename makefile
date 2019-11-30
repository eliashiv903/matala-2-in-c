CC = gcc

all:myBanks mains

myBanks:libmyBank.a

libmyBank.a:myBank.o myBank.h
	ar rcs libmyBank.a myBank.o myBank.h

myBank.o:myBank.c myBank.h
	$(CC) -fPIC -c myBank.c

main.o:main.c myBank.h
	$(CC) -Wall -c main.c

mains:main.o libmyBank.a
	$(CC) -Wall -g -o mains main.o libmyBank.a

.PHONY:clean all

clean:
	rm -f *.o *.a *.so mains 
