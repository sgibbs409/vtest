


all: uninitialized.c
	gcc -g -Wall uninitialized.c -o uninit
vheaders: vheaders.c
	gcc -g -Wall vheaders.c -o vheaders

.PHONY: all clean

clean:
	rm -rf *.o uninit vheaders
