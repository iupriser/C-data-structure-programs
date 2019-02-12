#include"./../include/header.h"

void common(void){
	
	int a[10],b[15],c[10],i,k=0; 
	printf("Enter the entries of array A of integers (must enter 10 entries) \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
    printf("Enter the entries of array B of integers (must enter 15 entries) \n");
	for(i=0;i<15;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nEntered entries of array A of integers are..... \n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
    printf("\nEntered entries of array B of integers are..... \n");
	for(i=0;i<15;i++)
	{
		printf("%d\t",b[i]);
	}
    
	printf("\nArray C,that contains elements that are common to A and B.\n");
	
	for(i=0;i<15;i++){
        int j;
        for(j = 0; j < 10; j++)
        {
            if(b[i] == a[j]){
                c[k]=a[j];
                k++;
            }
        }    
    }
    for(i=0;i<k;i++)
	{
		printf("%d\t",c[i]);
	}
return;
}
