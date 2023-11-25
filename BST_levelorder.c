//BST Level order
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 20
typedef struct node
{
int info;
struct node *left,*right;
}NODE;
typedef struct{
NODE *data[MAXSIZE];
int front,rear;
}QUEUE;
NODE *create();
NODE *insert(NODE *,int);
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
void initq(QUEUE *pq){
pq->front=pq->rear=-1;
}
void addq(QUEUE *pq,NODE *treenode){
pq->data[++pq->rear]=treenode;
}
NODE *removeq(QUEUE *pq){
return pq->data[++pq->front];
}
int isempty(QUEUE *pq){
return(pq->front==pq->rear);
}
int isfull(QUEUE *pq){
return(pq->rear==MAXSIZE-1);
}
void levelorder(NODE* root){
int level=0;
NODE *temp,*marker=NULL;
QUEUE q;
initq(&q);
addq(&q,root);
addq(&q,marker);
printf("\nLevel %d -->",level);
while(!isempty(&q)){
temp=removeq(&q);
if(temp==marker){
level++;
if(!isempty(&q)){
addq(&q,marker);
printf("\nLevel %d -->",level);
}
}
else{
printf("%d\t",temp->info);
if(temp->left)
addq(&q,temp->left);
if(temp->right)
addq(&q,temp->right);
}
}
}
int main(){
int x;
NODE *root;
root=create();
 printf("\nLevel order Traversal\n");
 levelorder(root);
}