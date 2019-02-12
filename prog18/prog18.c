//prog18
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SUCCES 0
#define FAILURE 1

typedef struct snode{
    char character;
    struct snode * link;
}snode;

void main(void){
    snode * head=NULL;
    FILE *fp;
    char str[80];
    fp=fopen("file1","w+");
    if(NULL==fp){printf("error in opening file|permission denied\n");exit(FAILURE);}
    printf("Write some English sentences\n");
    memset(str,0,80);
    fgets(str,79,fp);
    /*printf("want to add more sentences...type 1 to continue, else, to close the file and exit\n");
    scanf(" %d",&choice);
*/
       
    return;
}