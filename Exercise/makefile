CC = gcc
CFLAGS = -Wall -O2 


program: program2.o 
	$(CC) -o $@ $^ && ./$@

program.o: program2.c 
	$(CC) $(CFLAGS) -c -o $@ $<

run:
	./$@

clean: program2.o 
	rm -f $@ $^
