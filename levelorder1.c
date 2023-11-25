#include<stdio.h> 
#include"levelorder1.h"

void main()

{ 
node *root=NULL; 
root = createBST(root);

inorder(root); printf("\n Level order traversal is"); levelorder(root);

printf("\n");

}
