//prog2

#include<stdio.h>
#include<stdlib.h>

void main(int argc, char const *argv[])
{
    FILE *fp1,*fp2;
    char wrong[100],right[150];

    //checking for number of arguments in command line
    if (3!=argc) {
        printf("Wrong number of argumnets\n");
        exit(1);
    }

    //opening file
    if((fp1=fopen(argv[1],"r")==NULL){
        printf("Can't open the file\n");
        exit(1);
    }
    
    if ((fp2=fopen(argv[2],"w")==NULL)) {
        printf("Can't open the file\n");
        exit(1);
    }

    
    while((fgets(wrong,100,fp1)!=NULL)){
        
    }
    
    
    /* code */
    return;
}
