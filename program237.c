#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;

    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

void displayI(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d\t",Head->data);
        Head = Head->next;
    }
    printf("\n");
}

void displayR(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        displayR(Head->next);
    }
}

int countI(PNODE Head)
{
    int icnt = 0;
    while (Head != NULL)
    {
        icnt++;
        Head = Head->next;
    }
    return icnt;    
}

int countR(PNODE Head)
{
    static int icnt = 0;
    if(Head != NULL)
    {
        icnt++;
        countR(Head->next);
    }
    return icnt;    
}

int main()
{
    PNODE first = NULL;
    int result = 0;

    InsertFirst(&first,50);
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    displayI(first);
    displayR(first);

    result = countI(first);
    printf("\ncount is %d\n",result);

    result = countR(first);
    printf("count is %d\n",result);

    

    return 0; 
}

