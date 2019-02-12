#include"./../include/header.h"

void prime(int num)
{
	int i;
	for(i=2;i<(num/2);i++)
	{
		if(num%2)
		{
		printf("Entered number %d is not a prime number\n",num);
		break;
		}
		else
		{
		printf("Entered number %d is a prime number\n",num);
		break;	
		}
	}	

}

