#include<stdio.h>
#define MAX 20
typedef struct node
{
    int info;
    struct node *left,*right;
}node;
typedef struct 
{
    node *data[MAX];
    int front,rear;
}queue;
void initq(queue *pq)
{
    pq->front=pq->rear=-1;
}
void addq(queue *pq,node *treenode)
{
    pq->data[++pq->rear]=treenode;
}
node *