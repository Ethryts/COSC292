CC = gcc
CFLAGS = -Wall -O2 


program: program.o array_pointers.o
	$(CC) -o $@ $^ && ./$@

program.o: program.c array_pointers.o  
	$(CC) $(CFLAGS) -c -o $@ $<

run:
	./$@

clean: program.o 
	rm -f $@ $^
