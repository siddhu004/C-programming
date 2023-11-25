#include<stdio.h>
#include<stdlib.h>
#include"btree.h"
void main()
{
    int choice,n,ans;
    node *root=NULL,*root1;
    root=createBST(root);
    do
    {
        printf("\n1:inorder");
        printf("\n2:preorder");
        printf("\n3:postorder");
        printf("\n4:mirror image");
        printf("\n5:copy");
        printf("\n6:count total nodes");
        printf("\n7:count leaf nodes");
        printf("\n8:count non leaf node");
        printf("\n9:Exit");

        printf("\nenter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: //inorder
            printf("iorder traversal is: ");
            preorder(root);
            break;

            case 2: //preorder 
            printf("preorder traversal is: ");
            preorder(root);
            break;

            case 3: //postorder
            printf("postorder traversal is: ");
            postorder(root);
            break;

            case 4: mirror(root);
            inorder(root);
            break;
            
            case 5:treecopy(root);
            inorder(root1);
            break;

            case 6:ans=countnodes(root);
            printf("\n total nodes are: %d",ans);
            break;

            case 7:ans=count_non_leaf(root);
            printf("\n total non leaf nodes are: %d",ans);
            break;

            case 8:ans=countleaf(root);
            printf("\n total leaf nodesss are: %d",ans);
            break;

            case 9:exit(0);
        }
    }
    while(choice<=9);
}