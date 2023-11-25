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
{
    int ilength = 0;
    PNODE newn = NULL;
    int icnt = 0;

    ilength = count(*Head);
    PNODE temp = *Head;
    
    if((ipos < 1) || (ipos > ilength+1))
    {
        printf("invalid position");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(Head,no);
    }
    else if(ipos == ilength + 1)
    {
        InsertLast(Head,no);
    }
    else
    {
        for(icnt = 1;icnt < ipos-1;icnt++)
        {
            temp = temp->next;
        }
        newn = (PNODE)malloc(sizeof(PNODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        
        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;
    }
}

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
{
    int ilength = 0;
    int icnt = 0;
    PNODE temp = *Head;
    ilength = count(*Head);
    
    if((ipos < 1) || (ipos > ilength))
    {
        printf("invalid position");
        return;
    }

    if(ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if(ipos == ilength + 1)
    {
        DeleteLast(Head);
    }
    else
    {
        for(icnt = 1;icnt < ipos-1;icnt++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}


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
    InsertLast(&first,201);
    InsertLast(&first,251);    
    display(first);
    iret = count(first);
    printf("Number of elements are: %d\n",iret);

    DeleteFirst(&first);
    display(first);
    iret = count(first);
    printf("Number of elements are: %d\n",iret);

    DeleteLast(&first);    
    display(first);
    iret = count(first);
    printf("Number of elements are: %d\n",iret);

    InsertAtPos(&first,181,7);
    display(first);
    iret = count(first);
    printf("Number of elements are: %d\n",iret);

    DeleteFirst(&first);
    DeleteFirst(&first);
    DeleteFirst(&first);
    display(first);
    iret = count(first);
    printf("Number of elements are: %d\n",iret);

    DeleteAtPos(&first,2);
    display(first);
    iret = count(first);
    printf("Number of elements are: %d\n",iret);


    return 0;
}