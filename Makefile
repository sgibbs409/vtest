


all: uninitialized.c
	gcc -g -Wall uninitialized.c -o uninit

.PHONY: all clean

clean:
	rm *.o uninit
