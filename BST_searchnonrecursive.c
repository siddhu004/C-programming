//BST search non-recursive
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
NODE *search(NODE *T,int key){
while(T!=NULL){
if(key==T->info){
return(T);
}
if(key<T->info)
T=search(T->left,key);
else
T=search(T->right,key);
}return NULL;
}
int main(){
int key;
NODE *root,*temp;
root=create();
printf("\nEnter no. to search: ");
scanf("%d",&key);
temp=search(root,key);
if(temp!=NULL){
printf("\nElement found: %d",temp->info);
}
else
printf("\nElement not found!\n");
}