CC=gcc
CFLAGs= -Wall
RM= rm -f

main: hello.o
	${CC} -o main hello.o

hello.o: hello.c
	${CC} -c hello.c


.PHONY: clean

clean: 
	${RM} main hello.o
