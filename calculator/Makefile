##
# Calculator
#

SRCS = add.c calc.c mult.c sub.c
OBJS = $(SRCS:.c=.o) #substitutes every .c with .o
PROG = calculator
CC = gcc
CFLAGS = -g
INSTALL_ROOT = /usr/local

$(PROG): $(OBJS)
		$(CC) $(CFLAGS) -o $@ $^

$(OBJS): numbers.h

clean:
		rm -f $(OBJS) $(PROG)

install: $(PROG)
		cp $(PROG) $(INSTALL_ROOT)/bin
# end
