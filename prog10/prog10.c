//magic square

#include<stdio.h>
#include<stdlib.h>

void main(void)
{
    int r,c,i,j,choice;
    while(1){
        printf("\nEnter number of rows and columns of magic square\n");
        scanf("%d%d",&r,&c);
    if(r==c){
        
        if (0!=r%2) {
            printf("\t\t\t\tMAGIC SQUARE\n\n\n");

            //creation of matrix dynamically
            int *arr[r];
            int i,j;
            for( i = 0; i < r; i++)
            {
                arr[i]=(int *)malloc(c*sizeof(int));
            }

            //entering matrix dynamically
            printf("Enter elements of matrix...\n");
            for( i= 0; i < r; i++)
            {
                for( j = 0; j < c; j++)
                {
                    scanf("%d",&arr[i][j]);
                }
            }

            //printing matrix
            printf("\nEntered matrix is...\n");
            for( i = 0; i < r; i++)
            {
                for( j = 0; j < c; j++)
                {
                    printf("%d\t",arr[i][j]);
                }
            printf("\n");
            }

            //code for square matrix checking
            int sum = (r*((r*r)+1))/2;
            //row_sum
             for(i= 0; i<r; i++)
            {   
                int row_sum=0;
                for( j = 0; j < c; j++)
                {
                    row_sum+=arr[i][j]; 
                }
                if(sum!=row_sum){
			printf("\nThe entered matrix is not a MAGIC SQUARE\n");
			exit(0);
			}
           	 }
		          
            //col_sum
            for(j= 0; j<c; j++)
            {   
                int col_sum=0;
                for(i=0;i<r;i++)
                {
                    col_sum+=arr[i][j]; 
                }
                if(sum!=col_sum){printf("\nThe entered matrix is not a MAGIC SQUARE\n");exit(0);}
            }
            //diag_sum
            int diag_sum=0;
              for(i= 0,j=0; j<r; i++,j++)
            {   
                    diag_sum+=arr[i][j]; 
            }
                if(sum!=diag_sum){printf("\nThe entered matrix is not a MAGIC SQUARE\n");exit(0);}

	        printf("\nThe entered matrix is a MAGIC SQUARE\n");
        }
        else
        {
            printf("MAGIC square exists only for odd numbers of rows and columns\n\n\n");
        } 
    }  
    else{
        printf("rows and columns are not equal and hence it is not a square matrix...\n");
        printf("if you want to re-enter rows and columns..type '1'  and to EXIT type '2'\n");
        scanf(" %d",&choice);
        
        if (1==choice) {
            continue;
            }
        else if(2==choice) {
             printf("\nexiting in 3...2...1\n");
             exit(0);
             }
        else {
             printf("\nInvalid choice\n");
            }
        }
    return;
}
}