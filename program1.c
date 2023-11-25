#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* pNODE;
typedef struct node** ppNODE;

int main()
{
    pNODE first = NULL;

    return 0;
} 