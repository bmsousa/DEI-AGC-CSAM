# Enable debugging and suppress pesky warnings
CFLAGS ?= -g -w

all:	harness

clean:
	rm -f harness

harness: harness.c
	${CC} ${CFLAGS} harness.c library.c -o harness
