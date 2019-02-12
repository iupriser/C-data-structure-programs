//prog5

#include<stdio.h>
#include<stdlib.h>

void main(int argc, char const *argv[])
{
    FILE *fptr;
    char ch;
    if (2!=argc) {
        printf("Wrong number of inputs\n");
        exit(EXIT_FAILURE);
    }

    fptr=fopen(argv[1],"r+");
    
    if (NULL==fptr) {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");
        exit(EXIT_FAILURE);
    }

    int count=1;
    while((ch = fgetc(fptr))!=EOF){
        if(ch == '\n'){
            fseek(fptr,-1,SEEK_SET);
            fputc('1',fptr);   
            fseek(fptr,0,SEEK_END);         
        }      
    }
    fclose(fptr);
    return;
}
