CC = gcc
CFLAGS = -Wall -O2

program: program.o memory.o
	$(CC) -o $@ $^ && ./$@

program.o: program.c memory.c
	$(CC) $(CFLAGS) -c -o $@ $<

run:
	./$@

clean: program.o memory.o
	rm -f $@ $^
