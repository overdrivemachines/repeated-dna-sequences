
# Variables to control Makefile operation

CC = g++
CFLAGS = -Wall -g

repeated-dna-sequences: repeated-dna-sequences.o
	$(CC) $(CFLAGS) -o repeated-dna-sequences repeated-dna-sequences.o

repeated-dna-sequences.o: repeated-dna-sequences.cpp
	$(CC) $(CFLAGS) -c repeated-dna-sequences.cpp

clean:
	rm -rf repeated-dna-sequences repeated-dna-sequences.o
