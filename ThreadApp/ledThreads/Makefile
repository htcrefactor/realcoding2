SRCS := ledThreads.c led.c led_blue.c led_yellow.c
OBJS := $(SRCS:.c=.o)

CC := gcc
CFLAGS = -Wall -g -Iinclude
#CFLAGS = -c -Wall -O2

all : mytest exam2 exam3

LedThreads : $(OBJS)
	$(CC) -o $@ $^

exam2 : $(OBJS2)
	$(CC) -o $@ $^

exam3 : $(OBJS3)
	$(CC) -o $@ $^

#test1.o : test1.c a.h b.h

#dummy target
clean: 
	-rm $(OBJS)
	-rm mytest exam2 exam3

dep:
	gccmakedep $(SRCS)
