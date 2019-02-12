#include"./../include/header.h"

void max1_max2(void){
	int a[20],n,i; 
	printf("\nEnter the number of entries for a array of integers \n");
	scanf("%d",&n);
	printf("Enter the entries of array of integers \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEntered entries of array of integers are..... \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	
	int max1,max2,temp;
	max1=max2=a[0];
	for(i=1;i<n;i++)
	{
		if(max1<a[i])
		{
			max1=a[i];
		}
	
	}
	for(i=1;i<n;i++)
	{
		if(max2<a[i])
		{	
			if(max1==a[i])
			{
			continue;
			}
			else
			{
			max2=a[i];
			}
		}
	}
	printf("\nfirst MAX %d and second MAX %d\n",max1,max2);

}


