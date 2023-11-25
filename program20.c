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
    PNODE temp = *Head;

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
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;         // #
    }
}

////////////////////////////////////////////////

void InsertAtPos(PPNODE Head,int no,int ipos)
{}

////////////////////////////////////////////////

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free((*Head)->next);
        *Head = NULL;
    }
    else
    {
        *Head = temp->next;
        free(temp);
    }
}

////////////////////////////////////////////////

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)->next == NULL)
    {
        free((*Head)->next);
        *Head = NULL;
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

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
    
    InsertLast(&first,111);
    InsertLast(&first,121);
    InsertLast(&first,151);   
    display(first);
    iret = count(first);
    printf("Number of elements are: %d\n",iret);

    DeleteFirst(&first);
    DeleteFirst(&first);
    display(first);
    iret = count(first);
    printf("Number of elements are: %d\n",iret);

    DeleteLast(&first);    
    display(first);
    iret = count(first);
    printf("Number of elements are: %d\n",iret);

    return 0;
}