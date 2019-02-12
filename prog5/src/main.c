#include "./../include/header.h"

void main(void){
	int choice;
	float input,var=0;

	do{
		printf("\n\t\tCALCULATOR\n");
		printf("1.Addition\n");
		printf("2.Subtraction\n");
		printf("3.Multiplication\n");
		printf("4.Division\n");
		printf("5.Exit\n");
		
		printf("Enter your choice of operation(1-4) and for exit(5)\n");
		scanf(" %d",&choice);
		
		switch(choice){
			case 1: printf("\n\t\tAddition\n");
				printf("Enter user input....\t");
				scanf(" %f",&input);
				printf("Sum of %.2f and %.2f is :%.2f ",var,input,sum(var,input));
				var=sum(var,input);
				break;
			case 2: printf("\n\t\tSubtraction\n");
				printf("Enter user input....\t");
				scanf(" %f",&input);
				printf("Substraction of %.2f and %.2f is :%.2f ",var,input,sub(var,input));
				var=sub(var,input);
				break;
			case 3: printf("\n\t\tMultiplication\n");
				printf("Enter user input....\t");
				scanf(" %f",&input);
				printf("Multiplication of %.2f and %.2f is :%.2f ",var,input,mul(var,input));
				var=mul(var,input);
				break;
			case 4: printf("\n\t\tDivision\n");
				printf("Enter user input....\t");
				scanf(" %f",&input);
				printf("Division of %.2f and %.2f is :%.2f ",var,input,Div(var,input));
				var=Div(var,input);
				break;
			case 5:	exit(0);
				break;
			default: printf("\nInvalid choice...");
			}

	}while(choice!=5);

	return;
}
