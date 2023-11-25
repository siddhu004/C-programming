#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;           // #
}NODE,*PNODE,**PPNODE;

////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(PNODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;           // #

    if(*Head == NULL)            // LL is empty
    {
        *Head = newn;
    }
    else                        // LL contains at last one node in it
    {
        newn->next = *Head;
        (*Head)->prev = newn;       // #
        *Head = newn;
    }
}

////////////////////////////////////////////////

void InsertLast(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(PNODE));
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;           // #

    if(*Head == NULL)            // LL is empty
    {
        *Head = newn;
    }
    else                        // LL contains at last one node in it
    {}
}

////////////////////////////////////////////////

void InsertAtPos(PPNODE Head,int no,int ipos)
{}

////////////////////////////////////////////////

void DeleteFirst(PPNODE Head)
{}

////////////////////////////////////////////////

void DeleteLast(PPNODE Head)
{}

////////////////////////////////////////////////

void DeleteAtPos(PPNODE Head,int ipos)
{}

////////////////////////////////////////////////

void display(PNODE Head)
{
    PNODE temp = Head; 
    printf("Elements of linked list are: \n");

    printf("NULL <=> ");

    while(temp != NULL)
    {
        printf("|%d| <=> ",temp->data);
        temp = temp->next;
    }
    printf("NULL \n");
}

////////////////////////////////////////////////

int count(PNODE Head)
{
    int icount = 0;

    while (Head != NULL)
    {
        icount++;
        Head = Head->next;
    }
    return icount;
}

////////////////////////////////////////////////

int main()
{
    PNODE first = NULL;
    int iret = 0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    display(first);
    iret = count(first);
    printf("Number of elements are: %d\n",iret);
    return 0;
}