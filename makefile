conjunto	:	main.o	elem.o	lista.o	conjuto.o
	gcc	-o	conjunto	main.o	elem.o	lista.o	conjuto.o
main.o	:	main.c	conjuto.h
	gcc	-c	main.c
elem.o	:	elem.c
	gcc	-c	elem.c
lista.o	:	lista.c	elem.h
	gcc	-c	lista.c
conjuto	:	conjuto.c	lista.h	
	gcc	-c	conjuto.c
clean	:
	rm	conjunto	\
	main.o	elem.o	lista.o	conjuto.o
