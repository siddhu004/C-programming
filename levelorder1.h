#include<stdio.h> 
#include<stdlib.h> 
#define MAX 20

typedef struct node

{ int info;

struct node *left, *right; 
}node;

//** Queue Functions* 
typedef struct

{

node *data [MAX]; 
int front, rear; 
}queue;

void initq(queue *pq)
{
  pq->front = pq->rear = -1;

}

void addq(queue *pq, node *treenode) 
{

pq->data[++pq->rear] = treenode; 
}

node *removeq(queue *pq) {

return pq->data[++pq->front];

} int isempty(queue *pq)

{ return(pq->front == pq->rear);

}

int isfull (queue *pq)
{
return(pq->rear== MAX-1); }


node * createBST(node * root)

{

node *newnode, * temp;

int i,n,num;

printf("How many nodes:");

scanf("%d", &n); 
for(i=1;i<=n; i++)

{

newnode=(node*)malloc(sizeof(node)); printf("Enter the element:"); scanf("%d", &num);

newnode->info = num; newnode-> left=newnode->right= NULL;

/* attach newnode to the tree*/

if(root == NULL)

root = newnode; else

{

temp = root;

while(1)

{ if(num < temp->info)

{

if(temp ->left == NULL) /* temp does not have

left child*/

{ temp->left = newnode; /* attach node */

break;

} else

temp = temp -> left; /* move temp left */

}

else

{ if(temp->right == NULL)

{ temp->right = newnode; /* attach node */

break;

}

else

temp = temp -> right;//move temp right/ //else
}
}

}

} return(root);


}

void inorder(node *root)
{
node *temp = root;

if(temp !=NULL)

{

inorder(temp -> left); // Left 
printf("%d", temp-> info); //Datal 
inorder(temp -> right); // Right

} }

void levelorder(node *root)
{

int i, level =0,node_count = 0; node * temp, * marker = NULL;

queue q; initq(&q);

addq(&q,root);

addq(&q,marker);

printf("\n Level %d>", level); 
while(!isempty(&q))

{

temp-removeq(&q); if(temp == marker)

{

printf("total nodes is %d", node_count);

level++;

node_count = 0;

if(!isempty(&q))

{

addq(&q,marker); printf("\n Level %d ----->", level);

}

}

else


{

node_count++; printf("%d\t",temp->info); if(temp->left) addq(&q,temp->left); if(temp->right);

} 
}}
