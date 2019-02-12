//prog4

#include<stdio.h>
#include<stdlib.h>
#define BUFFER_SIZE 100

void main(int argc, char const *argv[])
{
    FILE *fp1,*fp2;
    char ch;
    if(3!=argc)
    {
        printf("Number of arguments are not correct\n");
        exit(0);
    }

    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"w");
    
    if(NULL== fp1 ||NULL== fp2){
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");
        exit(0);
    }

    //reading file1.txt character by character
    char buffer[BUFFER_SIZE];
    while(NULL!=fgets(buffer,BUFFER_SIZE,fp1))      //reads a complete line from file1.txt
    {
        while(EOF!=(ch=fgetc(fp1)))     
        {
            if(ch!=' ' && ch!='\t' && ch!='\n' && ch!='\r' && ch!='\0'){
                fputc(ch,fp2);
            }         
        }
        
    }
    

    
   fclose(fp1);
   fclose(fp2);
   return;
}

