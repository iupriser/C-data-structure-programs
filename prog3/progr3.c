//Write a program to find out whether a given number is a power of 2 or not (use bit wise operations).

#include<stdio.h>

void main(void)
{
	int num;
	printf("Enter a number to be checked for power of 2\n");
	scanf(" %d",&num);
	if(0==(num & (num-1))){
		printf("Entered number is a power of 2\n");
	}	
	else{
		printf("Entered number is not a power of 2\n");
	}
	return;
}
