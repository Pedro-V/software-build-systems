##
# Calculator
#
# @version 0.1

calculator: add.o calc.o mult.o sub.o
		gcc -g -o calculator add.o calc.o mult.o sub.o

add.o: add.c numbers.h
		gcc -g -c add.c

sub.o: sub.c numbers.h
		gcc -g -c sub.c

mult.o: mult.c numbers.h
		gcc -g -c mult.c

calc.o: calc.c numbers.h
		gcc -g -c calc.c
