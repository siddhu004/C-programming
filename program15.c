#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE,**PPNODE;

/////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(PNODE));        // 1

    newn->data = no;                            // 2
    newn->next = NULL;

    if(*Head == NULL)                           // 3
    {
        *Head = newn;                           // 4
    }
    else
    {
        newn->next = *Head;                     // 5
        *Head = newn;                           // 6
    }
}

/////////////////////////////////////////////////////

void InsertLast(PPNODE Head,int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;

    newn = (PNODE)malloc(sizeof(PNODE));     

    newn->data = no;                            
    newn->next = NULL;

    if(*Head == NULL)                 
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }                     
        temp->next = newn;   
    }
}

/////////////////////////////////////////////////////

void Display(PNODE Head)
{
    printf("elements of linked list are: ");

    while (Head->next != NULL)
    {
        printf("[%d]->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

/////////////////////////////////////////////////////

int count(PNODE Head)
{
    int icount = 0;

    while(Head != NULL)
    {
        icount++;
        Head = Head->next;
    }
    return icount;
}

/////////////////////////////////////////////////////

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        printf("Linked list is empty");
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

/////////////////////////////////////////////////////

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL)
    {
        printf("Linked list is empty");
        return;
    }
    else if((*Head)->next == NULL)
    {
        free(*Head);
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

/////////////////////////////////////////////////////

int main()
{
    PNODE First = NULL;
    int iret = 0;

    InsertLast(&First,11);
    InsertLast(&First,21);
    InsertLast(&First,51);
    InsertLast(&First,101);
    Display(First);
    iret = count(First);
    printf("number of nodes are: %d\n",iret);
    

    InsertFirst(&First,10);
    InsertFirst(&First,20);
    Display(First);
    iret = count(First);
    printf("number of nodes are: %d\n",iret);


    DeleteFirst(&First);
    Display(First);
    iret = count(First);
    printf("number of nodes are: %d\n",iret);
    DeleteFirst(&First);
    Display(First);
    iret = count(First);
    printf("number of nodes are: %d\n",iret);

    
    DeleteLast(&First);
    Display(First);
    iret = count(First);
    printf("number of nodes are: %d\n",iret);
    DeleteLast(&First);
    Display(First);
    iret = count(First);
    printf("number of nodes are: %d\n",iret);
    
    return 0;
}