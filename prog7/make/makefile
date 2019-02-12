
#makefile for program 7

TARGET= ./../obj/main.o ./../obj/temperature.o ./../obj/prime.o ./../obj/reverse.o

./../bin/calculator: $(TARGET)
	gcc -o prog7 $(TARGET)
	mv prog7 ./../bin/

./../obj/main.o : ./../src/main.c ./../include/header.h
	gcc -c ./../src/main.c
	mv main.o ./../obj/
./../obj/temperature.o : ./../src/temperature.c ./../include/header.h
	gcc -c ./../src/temperature.c
	mv temperature.o ./../obj/
./../obj/prime.o : ./../src/prime.c ./../include/header.h
	gcc -c ./../src/prime.c
	mv prime.o ./../obj/
./../obj/reverse.o : ./../src/reverse.c ./../include/header.h
	gcc -c ./../src/reverse.c
	mv reverse.o ./../obj/
	
clean :
	rm ./../bin/prog7
	rm ./../obj/*.o

run :
	./../bin/prog7

