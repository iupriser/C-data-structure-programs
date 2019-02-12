//prog11

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void display(int ,char *[]);

void main(int argc, char *argv[]){
    
    if(3!=argc){
        printf("Wrong number of arguments\n");
        exit(1);
    }

    int max=atoi(argv[1]);
    char *pattern=argv[2];
    
    char *lines[max];   //array of pointer in which all string having pattern is to be stored.
    int i,count=0;
    char input[80];
    
    for(i = 0; i < max; i++)
    {
     memset(input,0,80);
     fgets(input,80,stdin);
     int len=strlen(input);
     while('\n'==input[len-1]){
             input[len-1]='\0';
        }
        /*check for end*/
    if (!strncmp(input,"end",3)){
        display(count,lines);
        exit(EXIT_SUCCESS);
    }
        /*finding the occurance of pattern in the line entered*/
    if (NULL!=strstr(input,pattern))    //if pattern is found.
        {
            lines[count]=(char*)malloc((len+1)*sizeof(char));
            if(NULL==lines[count]){printf("MAF\n");exit(EXIT_FAILURE);}
            strncpy(lines[count],input,len);
            count++;
        }
    }
    printf("\n\n");
    display(count,lines);       //Display the count of strings that has pattern in it.
    return;   
}
void display(int count,char *lines[]){
    printf("count of strings that has pattern in it is: %d\n",count);
    int i;
    char *print=NULL;
    printf("The output string in reverse order\n");
    for( i=0; i<count-1; i++)
    {
    print=strcat(lines[i+1],lines[i]);
    }
     printf("%s\n",print);
}