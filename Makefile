all: memory_sizes.c
	gcc -o memory_sizes memory_sizes.c

clean:
	rm -rf *.o
