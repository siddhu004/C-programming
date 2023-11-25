#include<stdio.h>
#include<stdlib.h>

struct node
{
    int no;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE Head)
{}

int Count(PNODE Head)
{
    return 0;
}
///////////////////////////////////

void InsertFirst(PNODE Head,int no)
{}

void InsertLast(PNODE Head,int no)
{}

void InsertAtPos(PNODE Head,int no,int pos)
{}

void DeleteFirst(PNODE Head)
{}

void DeleteLast(PNODE Head)
{}

void DeleteAtPos(PNODE Head,int pos)
{}

int main()
{
    PNODE Head = NULL;
    return 0; 
}

