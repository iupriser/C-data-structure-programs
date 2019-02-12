//Write a program to count the number of one bits and zero bits in an unsigned integer.

#include <stdio.h>

void main(void) {

	int num,rem,one=0,zero=0;
	printf("Enter a unsigned integer \n");
	scanf("%d",&num);

	while(num){
		rem=num%2;
		if (rem){
			one++;
		}
		else{
			zero++;
		}

		num/=2;
	}

    printf("\nnumber of one's: %d",one);
    printf("\nnumber of zero's: %d",zero);
return ;
}

