#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE,*PNODE,**PPNODE;

// 1: Allocate memory for new node
// 2: initialise the node
// 3: cheak wheather LL is empty or not
// 4: if LL is empty store address of newnode imn first
// 5: otherwise store the address of newnode inside next pointer of old first node
// 6: update first pointer with the address of new node

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

    newn = (PNODE)malloc(sizeof(PNODE));        // 1

    newn->data = no;                            // 2
    newn->next = NULL;

    if(*Head == NULL)                           // 3
    {
        *Head = newn;                           // 4
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
    
    return 0;
}