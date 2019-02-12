//prog3

#include<stdio.h>
#include<stdlib.h>

void main(int argc, char const *argv[])
{
    FILE *fp1,*fp2,*fp3;
    char ch;
    if(4!=argc)
    {
        printf("Number of arguments are not correct\n");
        exit(0);
    }

    fp1=fopen(argv[1],"r");
    fp2=fopen(argv[2],"r");
    fp3=fopen(argv[3],"w");
    
    if(NULL== fp1 ||NULL== fp3 ||NULL== fp3){
        printf("\nUnable to open the destination files\n");
        exit(0);
    }
    //copy the contents of file1.txt file to file3.txt
    while((ch=fgetc(fp1))!=EOF){
        fputc(ch,fp3);
    }
    //copy the contents of file2.txt file to file3.txt
     while((ch=fgetc(fp2))!=EOF){
        fputc(ch,fp3);
    }

   printf("Merged file1.txt and file2.txt into file3.txt"); 
  
   fclose(fp1); 
   fclose(fp2); 
   fclose(fp3); 
   return;
}
