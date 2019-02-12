//program 13

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct employee{
        unsigned int id;
        char *name;
        char *department;
        int phone_num;
    }Employee;

Employee emp;

int add_new_record(FILE *fptr);
void display(FILE *fptr,int count);
void modify(void);

void main(void)
{    
    int choice;
    FILE *fptr;
    fptr=fopen("record","rb+");
    
    if(NULL==fptr){
        fptr=fopen("record","wb+");
        if (NULL==fptr) {
            printf("Error in opening file\n");
            exit(EXIT_FAILURE);
        }    
    }

    while(1){
                   //menu code
        printf("1.Add new record to the database\n");
        printf("2.Display record by name of employee\n");
        printf("3.Modify an existing employee phone number by specifying the ID\n");
        printf("4.Exit\n\n\n");
        scanf(" %d",&choice);
        //clear input buffer
        

      switch (choice)
      {
            case 1:
              printf("\t\tAdd new record to the database\n\n");
              int count = add_new_record(fptr);
              break;
            case 2:
              printf("\t\tDisplay record by name of employee\n\n");
              display(fptr,count);
              break;
              case 3:
              printf("\t\tModify an existing employee phone number by specifying the ID\n\n");
              //modify(fptr);
              break;
              case 4:
              printf("\t\tExiting......\n\n");
              exit(EXIT_SUCCESS);
              break;
      
          default:
          printf("\t\tInvalid choice\n\n");
              break;
      }
    }
    return;
}

int add_new_record(FILE *fptr)
{
    int count=0,i;
    char input[30];
    printf("Enter number of records to be recorded\n");
    scanf(" %d",&count);

    Employee emp[count];        //array of structure

    for( i = 0; i < count; i++)
    {
        printf("Enter ID:\t");
       // fgets(emp[i].id,10,stdin);
        //scanf(" %d",&emp[i].id);
        char ch;
        while('\n'!=(ch=getchar())&&(EOF!=ch));
        printf("\nEnter Name:\t");
        memset(input,0,30);
            fgets(input,29,stdin);
            int len = strlen(input);
            if('\n'==input[len-1]){input[len-1]='\0';}
            emp[i].name = (char*)malloc((len+1)*sizeof(char));
            if(NULL==emp[i].name){printf("\t\tMAF\n");exit(EXIT_FAILURE);}
            strncpy(emp[i].name,input,len);
        printf("Enter Department:\t");
        memset(input,0,30);
            fgets(input,29,stdin);
            len = strlen(input);
            if('\n'==input[len-1]){input[len-1]='\0';}
            emp[i].department=(char*)malloc((len+1)*sizeof(char));
            if(NULL==emp[i].department){printf("\t\tMAF\n");exit(EXIT_FAILURE);}
            strncpy(emp[i].department,input,len);

        printf("Enter Phone number:\t");
        //fgets(emp[i].id,10,stdin);
        // scanf(" %d",&emp[i].phone_num);
            while('\n'!=getchar()){ ; }
    }
    fwrite(emp,sizeof(emp),1,fptr);
    return count;
}

void display(FILE *fptr,int count)
{   int i;
    for(i=0;i<count;i++)
    {   
        printf("\tRecord %d\n\n",(i+1));
        printf("Enter ID:\t%d\n",emp.id);
        printf("Enter Name:\t%s\n",emp.name);
        printf("Enter Department:\t%s\n",emp.department);
        printf("Enter Phone number:\t%d\n\n",emp.phone_num);

    }
}