SRCS := main.c func.c
OBJS := $(SRCS:.c=.o)
CC := gcc
CFLAGS = -c -Wall -g
# CFLAGS = -c -Wall -O2

three_file : $(OBJS)
	$(CC) -o $@ $^

.c.o : 
	$(CC) $(CFLAGS) $<

clean : 
	-rm $(OBJS)
	rm three_file

dep :
	gccmakedep $(SRCS)