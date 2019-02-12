//prog17

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SUCCES 0
#define FAILURE -1

typedef struct cnode{
    char names[50];
    struct cnode * link;
}cnode;

void insert(cnode**);
void display(cnode *);
void lucky(cnode**,int);
cnode * delete(cnode**,cnode*);

void main(void){
    cnode * last=NULL;
    int m,flag=1;
    while(flag){
        insert(&last);
        printf("want to add more names(1/0):\t");
        scanf("%d",&flag);
        while('\n'!=getchar()){;}   
    }
    display(last);
    printf("\nEnter a LUCKY number:\t");
    scanf("%d",&m);
    while('\n'!=getchar()){;}
    lucky(&last,m);
    return;
}

void insert(cnode ** last){
    cnode *new;
    new=(cnode *)malloc(sizeof(cnode));
    if(NULL==new){printf("memory not allocated\n");exit(FAILURE);}
    if(NULL == *last){        //list is empty
        *last=new;
        (*last)->link=*last;
    }
    else
    {
        new->link=(*last)->link;
        (*last)->link = new;
        *last = new; 
    }
    printf(" Enter name :\t");
    fgets(new->names,49,stdin);
    int len = strlen(new->names);
    if('\n'==new->names[len-1]){new->names[len-1]='\0';}
}

void display(cnode *last){
    if (NULL == last) {
        printf("List is emty\n");
        return;
    }
    
    cnode *p=last->link;        //point to first node
    printf("\n\n\nDisplaying names\n");
    do
    {
        printf(" %s\n",p->names);
        p=p->link;
    } while (p!=last->link);
    
}

void lucky(cnode ** last,int m)                 //function to calculate the lucky position after each pass
{   
    /*traversing in linked list to find mth element*/
    cnode *p;
    p=(*last)->link;    //p points to first node
    if (NULL == *last) {printf("\nempty list");return;}
    while((*last)->link != *last){             //process continues till only one element remains.
        int i;
        for(i = 1; i < m; i++)
        {
            p=p->link;
        }
        p = delete(last,p);    //should return pointer to next node(just ahead of deleted node)
    } 
    if ((*last)->link == *last) {
    printf("\n-----------------------WINNER----------------------\n");
    printf(" %s\n",p->names);  
    }
}

cnode * delete(cnode ** last,cnode *pos){                      //function to delete a node from a position given
    cnode *tmp,*q;
    if (NULL == *last) {
        printf("List is empty\n");
        return *last;
    }
    
   /*deletion from the beginning*/
   if (pos == (*last)->link) {
       tmp = (*last)->link;
       (*last)->link = tmp->link;
       free(tmp);
       return (*last)->link;
   }

   /*deletion in between*/
   
    q = (*last)->link;        //points to start of list.

    /*deletion from end*/

     if (pos == *last) {
       tmp = *last;
       while(q->link != *last){         //point q to second last node
           q = q->link;
       }
       q->link=(*last)->link;
       free(tmp);
       *last=q;
       return (*last)->link;
    }

   while(pos != q->link){
       q = q->link;
   }
    tmp = q->link;
    q->link= tmp->link;
    free(tmp);
    return q->link;
   
   
}
