CC=gcc
CFLAGS=-Wall -Wextra

all: sfp_reader

sfp_reader: main.o parser.o
	$(CC) $(CFLAGS) -o sfp_reader main.o parser.o

main.o: main.c parser.h
parser.o: parser.c parser.h sfp_map.h

clean:
	rm -f *.o sfp_reader