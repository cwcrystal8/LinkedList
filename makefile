all: linkedlist_driver.o linkedlist.o
	gcc linkedlist_driver.o linkedlist.o

linkedlist_driver.o: linkedlist_driver.c linkedlist.h
	gcc -c linkedlist_driver.c

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

clean:
	rm *.o

run:
	./a.out
