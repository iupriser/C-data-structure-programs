#include"./../include/header.h"

void main(void){
	int choice,num,input;
	float temp;
	do{
		printf("\n\t\t\tMENU\n");
		printf("1.Converts Fahrenheit temperatures  to Celcius.\n");
		printf("2.Determines whether a given positive integer is a prime or not\n");
		printf("3.Reverses the digits of a positive integer \n");
		printf("4.Exit\n");
		
		printf("Enter your choice of operation(1-3) and for exit(4)\n");
		scanf(" %d",&choice);
		
		switch(choice){
			case 1: printf("\n\tIn converts Fahrenheit temperatures  to Celcius\n");
				printf("Enter temperature in farenheit....\t");
				scanf(" %f",&temp);
				temperature(temp);
				break;
			case 2: printf("\n\tDetermines whether a given positive integer is a prime or not\n");
				printf("Enter user input....\t");
				scanf(" %d",&num);
				prime(num);
				break;
			case 3: printf("\n\tReverses the digits of a positive integer\n");
				printf("Enter user input....\t");
				scanf(" %d",&input);
				reverse(input);
				break;
			case 4:	exit(0);
				break;
			default: printf("\nInvalid choice...");
			}
	}while(choice!=4);

	return;
}
