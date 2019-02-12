//header for prog13

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

 typedef struct _employee{
        unsigned int id;
        char *name;
        char *department;
        int phone_num;
    }Employee;

void add_new_record(FILE *fptr);
void modify(FILE *fptr);
void display(FILE *fptr);
