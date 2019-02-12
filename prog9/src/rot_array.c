#include"./../include/header.h"

void rot_array(void)
{
	int a[20],n,i,j,choice,pos,temp; 
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
	printf("\nrotation - LEFT/RIGHT ?\nenter 1 for LEFT and 2 for RIGHT\t");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1: printf("Enter number of position to be rotated\n");
				scanf("%d",&pos);
				
				for(i = 0; i < pos; i++)
				{	
						temp = a[0];
						int k;
						for(k = 0; k < n-1; k++)
						{
							a[k]=a[k+1];
						}
						a[k]=temp;						
				}	
				printf("\nEntered entries of array of integers after rotation are..... \n");
					for(i=0;i<n;i++)
					{
						printf("%d\t",a[i]);
					}		
				break;
		case 2: printf("Enter number of position to be rotated\n");
				scanf("%d",&pos);

				for(i = 0; i < pos; i++)
				{	
						temp = a[n-1];
						int k;
						for(k = n-1; k >0; k--)
						{
							a[k]=a[k-1];
						}
						a[0]=temp;						
				}
				printf("\nEntered entries of array of integers after rotation are..... \n");
					for(i=0;i<n;i++)
					{
						printf("%d\t",a[i]);
					}	
			break;
		default:printf("invalid choice\n");
				break;
	}
return;
}