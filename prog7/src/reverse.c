
#include"./../include/header.h"

void reverse(int input){
	int digit,new_number=0;
	printf("\nEntered number is \t%d\n",input);
	while(input){
		digit=input%10;
		new_number=(new_number*10)+digit;
		input=input/10;
	}
	printf("\nreverse number is \t%d\n",new_number);

	
}


