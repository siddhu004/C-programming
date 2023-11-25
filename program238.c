
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool search(PNODE Head,int no)
{
    bool flag = false;

    if(Head == NULL)
    {
        printf("Tree is empty \n");
        return flag;
    }
    while(Head  != NULL)
    {
        if(no == Head->data)
        {
            flag = true;
            break;
        }
        else if(no > Head->data)
        {
            Head = Head->Rchild;
        }
        else if(no < Head->data)
        {
            Head = Head->Lchild;
        }
    }
    return flag;
}

void Predisplay(PNODE Head)
{
    if(Head != NULL)
    {
        printf("%d\t",Head->data);
        Predisplay(Head->Lchild);
        Predisplay(Head->Rchild);
    }
}

void Idisplay(PNODE Head)
{
    if(Head != NULL)
    {
        Idisplay(Head->Lchild);
        printf("%d\t",Head->data);
        Idisplay(Head->Rchild);
    }
}

void Postdisplay(PNODE Head)
{
    if(Head != NULL)
    {
        Postdisplay(Head->Lchild);
        Postdisplay(Head->Rchild);
        printf("%d\t",Head->data);
    }
}

int main()
{
    PNODE First = NULL;
    bool bret = false;
    int value = 0;

    insert(&First,21);
    insert(&First,25);
    insert(&First,15);

    printf("\nElements of preorder are : \n");
    Predisplay(First);

    printf("\nElements of Inorder are : \n");
    Idisplay(First);

    printf("\nElements of Postorder are : \n");
    Postdisplay(First);

    printf("\nEnter the element that you want to search \n");
    scanf("%d",&value);

    bret = search(First,value);
    if(bret == true)
    {
        printf("element has found");
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}