#include"./../include/header.h"

void array_sort(void)
{
	int a[20],n,i,choice,pos; 
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

    printf("\nCheck for Sorting...\n");

    for(i=1;i<n;i++){
        if(a[i-1]>a[i]){
            printf("array is not sorted\n");
            exit(0);
        } 
    }
    printf("array is sorted\n");
return;
}


