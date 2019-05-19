CC = gcc
CFLAGS = -Wall -g

OBJS = register.o print.o search.o delete.o phoneBookMain.o
all : main

%.o : %.c
	gcc -c -o $@ $(CFLAGS) $<
main : $(OBJS)
	$(CC) $(CFLAGS) -o main  $(OBJS)
clean :
	rm *.o main
