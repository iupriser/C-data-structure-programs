//prog15

/*----------------------header file part------------------------*/
#include<stdio.h>
#include<stdlib.h>
#define SUCCESS 1
#define FAILURE 0

typedef struct dnode
{
    int data;
    struct dnode * left;
    struct dnode * right;

}dnode;

int InsertBeg(dnode**,dnode**,int);
int InsertEnd(dnode**,dnode**,int);
int InsertMid(dnode**,dnode**,int);
int DeleteBeg(dnode**,dnode**);
int DeleteEnd(dnode**,dnode**);
int DeleteMid(dnode**,dnode**,int);
void display(dnode*);

/*----------------------header file part------------------------*/
/*----------------------main.c part-----------------------------*/

void main(void){
    dnode *head = NULL;
    dnode *tail = NULL;
    display(head);
    InsertBeg(&head,&tail,10);
    display(head);
    InsertEnd(&head,&tail,50);
    display(head);
    InsertMid(&head,&tail,33);
    display(head);
    DeleteBeg(&head,&tail);
    display(head);
  //  DeleteEnd(&head,&tail);
  //  display(head);
    DeleteMid(&head,&tail,33);
    display(head);
    
    return;
}

int InsertBeg(dnode ** head,dnode **tail,int item){
    dnode * new;
    new=(dnode *)malloc(sizeof(dnode));
    if(NULL==new){printf("MAF\n");exit(FAILURE);}
    new->data=item;
    new->left=NULL;
    if(NULL==*head){
        new->right=NULL;
        *head=new;
        *tail=new;
    }
    else
    {
        new->right=*head;
        (*head)->left=new;
    }
    *head=new;
    return SUCCESS;
}

int InsertEnd(dnode **head,dnode **tail,int item){
    dnode *new;
    new=(dnode *)malloc(sizeof(dnode));
    if(NULL==new){printf("MAF\n");exit(FAILURE);}
    new->data=item;
    new->right=NULL;
    if(NULL==*head){
        new->left=NULL;
        *head=new;
        *tail=new;
    }
    else
    {
        new->left=*tail;
        (*tail)->right=new;
    }
    *tail=new;
    return SUCCESS;
}

int InsertMid(dnode **head,dnode **tail,int item){
    dnode *new;
    new=(dnode*)malloc(sizeof(dnode));
    if(NULL==new){printf("MAF\n");exit(FAILURE);}
    new->data=item;
    if(NULL==*head){
        new->left=NULL;
        new->right=NULL;
        *head=new;
        *tail=new;
        return SUCCESS;
    }
    if(item < ((*head)->data))
    {   new->left=NULL;
        new->right=*head;
        (*head)->left=new;
        *head=new;
        return SUCCESS;
    }
    if(item > ((*tail)->data))
    {   new->right=NULL;
        new->left=*tail;
        (*tail)->right=new;
        *tail=new;
        return SUCCESS;
    }
    dnode *p=*head;
    dnode *q;
    while(item > p->data){p=p->right;}
    q=p->left;
    new->right=p;
    new->left=q;
    q->right=new;
    p->left=new;

    return SUCCESS;
}

int DeleteBeg(dnode** head,dnode** tail){
    dnode * p;
    int item;
    if(NULL==*head){printf("List is empty\n");exit(FAILURE);}
    p=*head;
    if(*head==*tail){
        *head=NULL;
        *tail=NULL;       //if only one element in the list is present
      
    }
    else
    {
        *head=p->right;
        (*head)->left=NULL;
    }
    item=p->data;
    free(p);
    p=NULL;
    return item;
    
}

int DeleteEnd(dnode** head,dnode** tail){
   dnode *p;
   int item;
   if(NULL==*head){printf("List is empty\n");exit(FAILURE);}
   p=*tail;
    if(*head==*tail){
        *head=NULL;
        *tail=NULL;
        
        }
    else
    {
        *tail=p->left;
        (*tail)->right=NULL;
        item=p->data;
    }
    item=p->data;
    free(p);
    p=NULL;
    return item;
}
/*
int DeleteMid(dnode** head ,dnode** tail ,int item){
    dnode*p,*q,*r;
    int value;
    if(NULL==*head){printf("List is empty\n");exit(FAILURE);}
    p=*head;
    if(*head==*tail){
        if(item!=(*head)->data){
            printf("item which is to be deleted is not found in the list\n");
            return FAILURE;
        }
        *head=NULL;
        *tail=NULL;
        value=p->data;
        free(p);
        p=NULL;
        return value;
    }
    q=p;
    while((item!=p->data) && NULL!=p){
     q=p;
     p=p->right;   
    }
    r=p->right;
    q->right=r;
    r->left=q;
    value=p->data;
    free(p);
    p=NULL;
    return value;

}
*/
void display(dnode*head){
    dnode *p;
    p=head;
    if(NULL==p){printf("List is empty\n");}
    while(NULL!=p){
        printf("data is -> %d ",p->data);
        p=p->right;
    }
    printf("\n");
}   