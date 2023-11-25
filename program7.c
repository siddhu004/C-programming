#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

///////////////////////////////////////////////////

void Display(PNODE Head)
{    
    printf("elements of linked list are: \n");

    while(Head != NULL)
    {
        printf("[%d] -> ",Head->data);
        Head = Head->next;
    }
    printf("NULL");
}

//////////////////////////////////////////////////

int Count(PNODE Head)
{
    return 0;
}

/////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
//  allocate memory for node
    newn =(PNODE)malloc(sizeof(NODE));

// initialise the node
    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)   //LL is empty
    {
        *Head = newn;
    }
    else    // LL contains at least one node
    {
        newn->next = *Head;
        *Head = newn;
    }
}

/////////////////////////////////////////////////

void InsertLast(PPNODE Head,int no)
{
    PNODE newn = NULL;
//  allocate memory for node
    newn =(PNODE)malloc(sizeof(NODE));

// initialise the node
    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)   //LL is empty
    {
        *Head = newn;
    }
    else    // LL contains at least one node
    {
    }
}
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
    PNODE first = NULL;
    InsertFirst(&first,51);        //InsertFirst(60,51);
    InsertFirst(&first,21);        //InsertFirst(60,21);
    InsertFirst(&first,11);        //InsertFirst(60,11);
    
    Display(first);
    return 0; 
}

