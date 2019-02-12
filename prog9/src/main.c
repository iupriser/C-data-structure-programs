#include"./../include/header.h"

void main(void){
	int choice,num,input;
	float temp;
	do{
		printf("\n\t\t\tMENU\n");
		printf("1.a function that finds maximum, second maximum value of an array of integers.\n");
		printf("2.a function that rotates an array of integers a given number of positions\n");
		printf("3.a function that determines whether a given array is sorted\n");
		printf("4.Given two arrays A and B. A contains 10 elements and B contains 15 elements. Write a function to create an array C that contains elements that are common to A and B.\n");
		printf("5.Exit\n");
		
		printf("Enter your choice of operation(1-4) and for exit(5)\n");
		scanf(" %d",&choice);
		
		switch(choice){
			case 1: printf("\n\tIn...Finding first MAX and second MAX");
				max1_max2();
				break;
			case 2: printf("\n\tIn...rotates an array of integers a given number of positions\n");
				rot_array();
				break;
			case 3: printf("\n\tIn...determining whether a given array is sorted\n");
				array_sort();
				break;
			case 4: printf("\n\tIn...Determining an array C that contains elements that are common to A and B\n");
				common();
				break;
			case 5:	exit(0);
				break;
			default: printf("\nInvalid choice...");
			}
	}while(choice!=5);

	return;
}
