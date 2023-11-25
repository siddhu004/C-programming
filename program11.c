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
    int icount = 0;

    while (Head != NULL)
    {
        icount++;
        Head = Head->next;
    }
    
    return icount;
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
    PNODE temp = 0;
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
        PNODE temp = *Head;
        
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

//////////////////////////////////////////////////

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
    int iret = 0;

    InsertFirst(&first,111);       //InsertFirst(60,111);
    InsertFirst(&first,101);       //InsertFirst(60,101);
    InsertFirst(&first,51);        //InsertFirst(60,51);
    InsertFirst(&first,21);        //InsertFirst(60,21);
    InsertFirst(&first,11);        //InsertFirst(60,11);
    
    InsertLast(&first,151);

    Display(first);

    iret = Count(first);
    printf("\n number of nodes are: %d\n",iret);

    InsertLast(&first,201);
    InsertLast(&first,251);

    Display(first);

    iret = Count(first);
    printf("\n number of nodes are: %d\n",iret);

    return 0; 
}

