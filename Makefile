# Makefile

CFLAGS= -std=c99

catsay: catsay.o rendercat.o printbubble.o

catsay.o: catsay.h
rendercat.o: rendercat.h
printbubble.o: printbubble.h

clean:
	rm -f catsay.o rendercat.o printbubble.o catsay

install: catsay
	cp catsay /bin



