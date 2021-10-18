all: main.o linkedlist.o
	gcc -o linkedlist main.o linkedlist.o
	
main.o: main.c linkedlist.c linkedlist.h
	gcc -c main.c linkedlist.c

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

run:
	./linkedlist
