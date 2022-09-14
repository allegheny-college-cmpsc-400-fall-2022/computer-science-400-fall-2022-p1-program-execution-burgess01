all: unbounded-cpu bounded-cpu

clean:
	rm -f bin/unbounded-cpu bin/bounded-cpu

bin:
	mkdir bin

unbounded-cpu: unbounded-cpu.c common.h bin
	gcc -o bin/unbounded-cpu unbounded-cpu.c -Wall

bounded-cpu: bounded-cpu.c common.h bin
	gcc -o bin/bounded-cpu bounded-cpu.c -Wall
