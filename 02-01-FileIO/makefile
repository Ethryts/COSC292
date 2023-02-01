CC = gcc
CFLAGS = -O2 


program: program.o file_io.o
	$(CC) -o $@ $^ && ./$@

program.o: program.c file_io.c
	$(CC) $(CFLAGS) -c -o $@ $<

run:
	./$@

clean: program.o file_io.o
	rm -f $@ $^
