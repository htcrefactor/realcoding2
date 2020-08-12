SRCS := test1.c test2.c test3.c
OBJS := $(SRCS:.c=.o)

CC := gcc
CFLAGS = -Wall -g  -Imyinclude
#CFLAGS = -c -Wall -O2

mytest : $(OBJS)
	$(CC) -o $@ $^

#dummy target
clean: 
	-rm $(OBJS)
	-rm mytest exam2 exam3

dep:
	gccmakedep $(SRCS)