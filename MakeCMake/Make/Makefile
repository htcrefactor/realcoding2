SRCS := test1.c test2.c test3.c
OBJS := $(SRCS:.c=.o)

SRCS2 := exam2.c test2.c
OBJS2 := $(SRCS2@:.c=.o)

SRCS3 := exam3.c test3.c
OBJS3 := $(SRCS3@:.c=.o)

CC := gcc
CFLAGS = -Wall -g
#CFLAGS = -c -Wall -O2

all : mytest exam2 exam3

mytest : $(OBJS)
	$(CC) -o $@ $^

exam2 : $(OBJS2)
	$(CC) -o $@ $^

exam3 : $(OBJS3)
	$(CC) -o $@ $^

#test1.o : test1.c a.h b.h

#dummy target
clean: 
	-rm $(OBJS)
	-rm $(OBJS2)
	-rm $(OBJS3)
	-rm mytest exam2 exam3

dep:
	gccmakedep $(SRCS)