//BST Postorder
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int info;
struct node *left,*right;
}NODE;
NODE *create();
NODE *insert(NODE *,int);
void postorder(NODE *);
NODE *create()
{
int i,n,x;
NODE *root;
root=NULL;
printf("\nEnter the no. of nodes: ");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("\nEnter the node: ");
scanf("%d",&x);
root=insert(root,x);
}
return(root);
}
NODE *insert(NODE *T,int x){
NODE *r;
if(T==NULL){
r=(NODE*)malloc(sizeof(NODE));
r->left=r->right=NULL;
r->info=x;
return(r);
}
else
if(x<T->info){
T->left=insert(T->left,x);
return(T);
}
if(x>T->info){
T->right=insert(T->right,x);
return(T);
}
else
printf("\nDuplicate Value!!\n");
return(T);
}
void postorder(NODE *T){
if(T!=NULL){
postorder(T->left);
postorder(T->right);
printf("%d\t",T->info);
}
}
int main(){
NODE *root;
root=create();
postorder(root);
}