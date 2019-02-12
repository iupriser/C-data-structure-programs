
#makefile for program 9

TARGET= ./../obj/main.o ./../obj/max1_max2.o ./../obj/rot_array.o ./../obj/array_sort.o ./../obj/common.o

./../bin/prog9: $(TARGET)
	gcc -o prog9 $(TARGET)
	mv prog9 ./../bin/

./../obj/main.o : ./../src/main.c ./../include/header.h
	gcc -c ./../src/main.c
	mv main.o ./../obj/
./../obj/max1_max2.o : ./../src/max1_max2.c ./../include/header.h
	gcc -c ./../src/max1_max2.c
	mv max1_max2.o ./../obj/
./../obj/rot_array.o : ./../src/rot_array.c ./../include/header.h
	gcc -c ./../src/rot_array.c
	mv rot_array.o ./../obj/
./../obj/array_sort.o : ./../src/array_sort.c ./../include/header.h
	gcc -c ./../src/array_sort.c
	mv array_sort.o ./../obj/
./../obj/common.o : ./../src/common.c ./../include/header.h
	gcc -c ./../src/common.c
	mv common.o ./../obj/
	
clean :
	rm ./../obj/*.o
	rm ./../bin/prog9

run :
	./../bin/prog9

