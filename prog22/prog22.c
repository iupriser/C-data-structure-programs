/*Implement binary search to search for a name in a set of names. 
The names should be sorted using bubble sort */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define FAILURE -1

void main(void){

    /*entering names in array*/
    //dynamic arrays with names and number of names in dynamic format

    char **names=NULL;
    char **temp;
    char input[30];
    int i,count=0,flag;
   
   
    do{
        printf("Enter name\n");
        count++;flag=0;
        temp=(char **)realloc(names,count*sizeof(char*));
        if (NULL==temp) {printf("MAF\n");exit(EXIT_FAILURE);}
        
        if (NULL!=temp) {
            names=temp;
            temp=NULL;
        }
        memset(input,0,30);
        fgets(input,29,stdin);
        int len=strlen(input);
        /*removing newline character*/
        while('\n'==input[len-1]){
            input[len-1]='\0';
        }
        names[count-1]=(char *)malloc((len+1)*sizeof(char));
        strncpy(names[count-1],input,len);
                       
        printf("Do you want to enter another record..type 1 for yes ,else to stop entering record.\t");
        scanf(" %d",&flag);   
        while('\n'!=getchar()){;}   //free the buffer 
    }while(1==flag);
    
    //print the names of record
    printf("\n");
    for( i = 0; i < count; i++)
    {
        printf("%s\n",names[i]);
    }

    /*sorting of names by bubble sort(modified bubble sort)*/
    printf("\n\nNUmber of records are:\t%d",count);
    for( i = 0; i <=count-2; i++)
    {   char temp1[30];
        memset(temp1,0,30);
        //int swap=0;
        int j;
        for( j = 0; j <=count-2-i; j++)
        {
            if (strcmp(names[j],names[j+1])>0) 
            {
                    strcpy(temp1,names[j+1]);
                    strcpy(names[j+1],names[j]);
                    strcpy(names[j],temp1);
                    //swap=1;
            }
            //if(0==swap){return;}
        }   
    }
    /*printing sorted array of names*/
        printf("\n----------------------------------------\n");

        printf("Sorted names\n");

        printf("------------------------------------------\n");
        for (i = 0; i < count; i++) 
        {
            printf("%s\n",names[i]);
        }
        printf("------------------------------------------\n");

    /*Implementing binary search*/

    char search_name[30];
    memset(search_name,0,30);
    printf("Enter the name to be searched in the list\n");
    fgets(search_name,29,stdin);
    /*code to clear newline character in the input buffer*/
    int len = strlen(search_name);
    while('\n'==input[len-1]){
            input[len-1]='\0';
        }    
    
    int beg = 0;
    int end = count-1;
    while(beg <= end)
    {
        int mid = (beg+end)/2;
        printf("i m here(1)\t%d\t",mid);
        int result = strcmp(names[mid],search_name);
        printf("\t%s\t",names[mid]);
        printf("\t%s\n",search_name);
        printf("value of result\t%d\t",result);
        if (0==result) {
            printf("name found!!! at %d position in array\n",mid);
            return;
        }
       // printf("i m here(2)\t%d\n",mid);
        if (result > 0) {
            end=mid-1;
        }
        else{
            beg=mid+1;
        }   
    }
        printf("name not found in the array\n");

    //free the memory from heap

    for(i=0;i<count;i++){
        free(names[i]);
        names[i]=NULL;
    }
    free(names);
    names=NULL;
    return; 
}