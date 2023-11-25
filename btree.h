#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int info;
    struct node *left,*right;
}node;
node *createBST(node *root)
{
    node *newnode,*temp;
    int i,n,num;
    printf("how many nodes: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("enter the element: ");
        scanf("%d",&num);
        newnode->info=num;
        newnode->left=newnode->right=NULL;
        if(root==NULL)
        root=newnode;
        else
        {
            temp=root;
            while(1)
            {
                if(num<temp->info)
                {
                    if(temp->left=NULL)
                    {
                        temp->left=newnode;
                        break;
                    }
                    else
                    temp=temp->left;
                }
                else
                {
                if(temp->right=NULL)
                    {
                       temp->right=newnode;
                       break;
                    }
                    else
                    temp=temp->right;
                }
            }
        }
    }
    return(root);
}
void preorder(node *root)
{
    node *temp=root;
    if(temp!=NULL)
    {
        printf("%d\t",temp->info);
        preorder(temp->left);
        preorder(temp->right);
    }
}
void inorder(node *root)
{
    node *temp=root;
    if(temp!=NULL)
    {
        inorder(temp->left);
        printf("%d\t",temp->info);
        inorder(temp->right);
    }
}
void postorder(node *root)
{
    node *temp=root;
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d\t",temp->info);
    }
}
int countnodes(node *root)
{
    static int count=0;
    node *temp=root;
    if(temp!=NULL)
    {
       count++;
        preorder(temp->left);
        preorder(temp->right);
    }
   return count;
}
int countleaf(node *root)
{
    static int leaf=0;
    node *temp=root;
    if(temp!=NULL)
    {
       leaf++;
        preorder(temp->left);
        preorder(temp->right);
    }
   return leaf;
}
int count_non_leaf(node  *root)
{
    static int non_leaf=0;
    node *temp=root;
    if(temp!=NULL)
    {
        if((temp->left!=NULL)||(temp->right!=NULL))

        non_leaf++;
        count_non_leaf(temp->left);
        count_non_leaf(temp->right);
    }
   return non_leaf;
}
node *treecopy(node *root)
{
    node *newnode;
    if(root!=NULL)
    {
       newnode=(node*)malloc(sizeof(node));
       newnode->info=root->info;
       newnode->left=treecopy(root->left);
       newnode->right=treecopy(root->right);
       return(newnode);
    }
    else
   return NULL;
}
void mirror(node *root)
{
    node *temp=root,*temp1;
    if(temp!=NULL)
    {
        if(temp->left!=NULL)
        mirror(temp->left);
        if(temp->right!=NULL)
        mirror(temp->right);

        temp1=temp->left;
        temp->left=temp->right;
        temp->right=temp1;
    }
}