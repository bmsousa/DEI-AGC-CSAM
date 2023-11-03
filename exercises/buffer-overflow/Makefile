# Enable debugging and suppress pesky warnings
CFLAGS ?= -fno-stack-protector -m32 -gdwarf-2 -g -w -z execstack

all:	simple geekstuff login shellcode 

clean:
	rm -f simple
	rm -f geekstuff
	rm -f login
	rm -f shellcode

simple: simple.c
	${CC} ${CFLAGS} simple.c -o simple

geekstuff: geekstuff.c
	${CC} ${CFLAGS} geekstuff.c -o geekstuff

login: login.c
	${CC} ${CFLAGS} login.c -o login

shellcode: shellcode.c
	${CC} ${CFLAGS} shellcode.c -o shellcode