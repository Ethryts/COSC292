CC = gcc
CFLAGS = -Wall -O2

program: program.o
	$(CC) -o $@ $^ && ./$@

program.o: program.c 
	$(CC) $(CFLAGS) -c -o $@ $<

run:
	./$@

clean: program.o 
	rm -f $@ $^
