//prog14

/*----------------------header file part------------------------*/
#include<stdio.h>
#include<stdlib.h>
#define SUCCESS 1
#define FAILURE 0

typedef struct node
{
    int data;
    struct node * link;
}node;

int InsertBeg(node**,int);
int InsertEnd(node**,int);
int InsertMid(node**,int);
int DeleteBeg(node**);
int DeleteEnd(node**);
int DeleteMid(node**,int);
void display(node*);

/*----------------------header file part------------------------*/
/*----------------------main.c part-----------------------------*/

void main(void){
    node *head = NULL;
    display(head);
    InsertBeg(&head,10);
    display(head);
    InsertEnd(&head,50);
    display(head);
    InsertMid(&head,33);
    display(head);
    DeleteBeg(&head);
    display(head);
    DeleteEnd(&head);
    display(head);
    DeleteMid(&head,33);
    display(head);
    
    return;
}

int InsertBeg(node ** head,int item){
    node * new;
    new=(node *)malloc(sizeof(node));
    if(NULL==new){printf("MAF\n");exit(FAILURE);}
    new->data=item;
    if(NULL==*head){
        new->link=NULL;
    }
    else
    {
        new->link=*head;
    }
    *head=new;
    return SUCCESS;
}

int InsertEnd(node **head,int item){
    node *new,*p;
    new=(node *)malloc(sizeof(node));
    if(NULL==new){printf("MAF\n");exit(FAILURE);}
    new->data=item;
    new->link=NULL;
    if(NULL==*head){
        *head=new;
    }
    else
    {
        p=*head;
        while(NULL!=p->link){p=p->link;}
        p->link=new;
    }
    return SUCCESS;
}

int InsertMid(node **head,int item){
    node *new,*p,*q;
    new=(node*)malloc(sizeof(node));
    if(NULL==new){printf("MAF\n");exit(FAILURE);}
    new->data=item;
    if(NULL==*head){
        new->link=NULL;
        *head=new;
        return SUCCESS;
    }
    if(item< ((*head)->data))
    {
        new->link=*head;
        *head=new;
        return SUCCESS;
    }
    p=(*head)->link;
    q=*head;            //trailing pointer 
    while((item > p->data) && (NULL!=p)){
        q=p;
        p=p->link;
    }
    new->link=p;
    q->link=new;
    return SUCCESS;
}

int DeleteBeg(node** head){
    node * p;
    int item;
    if(NULL==*head){printf("List is empty\n");return FAILURE;}
    p=*head;
    item=p->data;
    if(NULL==p->link){
        *head=NULL;
    }
    else{
        *head=p->link;
    }
    free(p);
    p=NULL;
    return item;
}
int DeleteEnd(node** head){
    node *p,*q;
    int item;
    if (NULL==*head) {printf("List is empty\n");return FAILURE;}
    p=*head;
    if(NULL==p->link){
        *head=NULL;
    }
    else
    {
        q=p;
        while(NULL!=p->link){q=p;p=p->link;}
        q->link=NULL;
    }
    item=p->data;
    free(p);
    p=NULL;
    return item;    
}
int DeleteMid(node** head ,int item){
    node *p,*q;
    if(NULL==*head){printf("List is empty\n");return FAILURE;}
    p=*head;
    if(NULL==p->link){          //only one element
        if (item!=p->data) {
            printf("item which is to be deleted is not found in the list\n");
            exit(FAILURE);
        }
        *head=NULL;
        }
    q=p;
    while((item!=p->data) && NULL!=p){
    q=p;    
        p=p->link;
    }
    q->link=p->link;
    
    item=p->data;
    free(p);
    p=NULL;
    return item;
}

void display(node*head){
    node *p;
    p=head;
    if(NULL==p){printf("List is empty\n");}
    while(NULL!=p){
        printf("\ndata is -> %d ",p->data);
        p=p->link;
    }
    printf("\n");
}   