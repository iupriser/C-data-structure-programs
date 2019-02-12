//prog16(done with single linked-list )

#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 0
#define FAILURE 1

typedef struct node
{
    int coeff;
    unsigned int power;
    struct node *link;
}node;

void node_append(node **,int);
void display(node*);
void derivate(node**);

void main(void){
    int order,i;
    node * head = NULL;
    printf("Enter the highest degree of polynomial: \n");
    scanf(" %d",&order);
    while('\n'!=getchar()){
        ;
    }
    
    while(order+1){
        node_append(&head,order);
        order--;
    }
    printf("\nPolynomail is:\t");
    display(head);
    derivate(&head);
    display(head);
    return;
}

void node_append(node ** head,int order){

    node *new,*p;
    new=(node *)malloc(sizeof(node));
    if(NULL==new){printf("MAF\n");exit(FAILURE);}
    new->link=NULL;
    new->power=order;
    printf("Enter coefficent of x^%d: \n",order);
    scanf(" %d",&new->coeff);

    if(NULL==*head){            //list is empty 
        *head=new;
    }
    else
    {
        p=*head;
        while(NULL!=p->link){p=p->link;}
        p->link=new;
        p=p->link;
    }
}

void derivate(node ** head){
    printf("\nDerivate of polynomial is : \t");
    node * new,*p,*q;
    new=(node *)malloc(sizeof(node));
    new->coeff=0;
    new->power=0;
    new->link=NULL;
    if(NULL==*head){printf("polynomail doesnot exist\n");}
    p=*head;
    q=p;
    while(NULL!=q->link){
        q=p;
        p->coeff = ((p->coeff)*(p->power));
        p->power = ((p->power)-1);
        p=p->link;
        if (0==p->power) {
            q->link=NULL;
        }  
    }
}

void display(node *head){
    node *p;
    p=head;
    if (NULL==p) {printf("\nList is empty\n");exit(FAILURE);}
    while(NULL!=p){
        printf("%+dx^%d",p->coeff,p->power);
        p=p->link;
    }
    
}