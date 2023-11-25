//BST search recursive
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int info;
struct node *left,*right;
}NODE;
NODE *create();
NODE *insert(NODE *,int);
NODE *searchR(NODE *,int);
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
NODE *searchR(NODE *T,int key){
NODE *temp=T;
if(temp==NULL||temp->info==key)
return temp;
else
if(key<temp->info)
searchR(temp->left,key);
else
searchR(temp->right,key);
}
int main(){
int key;
NODE *root,*temp;
root=create();
printf("\nEnter no. to search: ");
scanf("%d",&key);
temp=searchR(root,key);
if(temp!=NULL){
printf("\nElement found: %d",temp->info);
}
else
printf("\nElement not found!\n");
}