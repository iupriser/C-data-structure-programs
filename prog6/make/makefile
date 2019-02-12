

./../bin/macroprog : ./../obj/main.o
	gcc -o macroprog  ./../obj/main.o
	mv ./../make/macroprog ./../bin/
	

./../obj/main.o : ./../src/main.c ./../include/header.h
	gcc -c ./../src/main.c 
	mv ./../make/main.o ./../obj/

clean : 
	rm ./../bin/macroprog
	rm ./../obj/*.o

run :
	./../bin/macroprog
