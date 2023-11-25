
#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *Lchild;
    struct Node *Rchild;
}NODE,*PNODE,**PPNODE;

void insert(PPNODE Head,int no)
{
    PNODE temp = *Head;
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->Lchild = NULL;
    newn->Rchild = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(1)
        {
            if(no == temp->data)
            {
                printf("duplicate element unable to insert  \n");
                free(newn);
                break;
            }
            else if(no > temp->data)
            {
                if(temp->Rchild == NULL)
                {
                    temp->Rchild = newn;
                    break;
                }
                temp = temp->Rchild;
            }
            else if(no < temp->data)
            {
                if(temp->Lchild == NULL)
                {
                    temp->Lchild = newn;
                    break;
                }
                temp = temp->Lchild;
            }
        }
        
    }
}

int main()
{
    PNODE First = NULL;

    insert(&First,21);
    insert(&First,25);
    insert(&First,15);

    return 0;
}