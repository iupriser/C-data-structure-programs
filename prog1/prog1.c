//Write a program to find the sizes of various data types available in C.

#include<stdio.h>

void main(void)
{
	printf("Type\t\t\t\t Size (bytes)");
	printf("\nCharacter  \t\t\t\t%ld",sizeof(char));
	printf("\nInteger    \t\t\t\t%ld",sizeof(int));
	printf("\nLong int   \t\t\t\t%ld",sizeof(long int));
	printf("\nFloat      \t\t\t\t%ld",sizeof(float));
	printf("\nDouble     \t\t\t\t%ld",sizeof(double));
	printf("\nLong double\t\t\t\t%ld\n",sizeof(long double));
	return;
}
