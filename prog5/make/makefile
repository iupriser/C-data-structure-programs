#makefile for program 5

TARGET= ./../obj/main.o ./../obj/sum.o ./../obj/sub.o ./../obj/mul.o ./../obj/Div.o

./../bin/calculator: $(TARGET)
	gcc -o calculator $(TARGET)
	mv calculator ./../bin/

./../obj/main.o : ./../src/main.c ./../include/header.h
	gcc -c ./../src/main.c
	mv main.o ./../obj/
./../obj/sum.o : ./../src/sum.c ./../include/header.h
	gcc -c ./../src/sum.c
	mv sum.o ./../obj/
./../obj/sub.o : ./../src/sub.c ./../include/header.h
	gcc -c ./../src/sub.c
	mv sub.o ./../obj/
./../obj/mul.o : ./../src/mul.c ./../include/header.h
	gcc -c ./../src/mul.c
	mv mul.o ./../obj/
./../obj/Div.o : ./../src/Div.c ./../include/header.h
	gcc -c ./../src/Div.c
	mv Div.o ./../obj/
	
clean :
	rm ./../obj/*.o
	rm ./../bin/calculator

run :
	./../bin/calculator

