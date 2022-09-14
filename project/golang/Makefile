all: unbounded-cpu bounded-cpu

clean:
	rm -f bin/unbounded-cpu bin/bounded-cpu

bin:
	mkdir bin

unbounded-cpu: unbounded-cpu.go bin
	go build --o bin unbounded-cpu.go

bounded-cpu: unbounded-cpu.go bin
	go build --o bin bounded-cpu.go
