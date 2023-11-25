#include<stdio.h>
#include<stdlib.h>
#define size 10
typedef struct node
{
 int key;
 struct node *next;
}node;
node * ht[size]={NULL};
int hf(int key)
{
 return (key%size);
}
void insert(int k)
{
 int index;
 node * newnode=NULL, *temp;
 newnode=(node *)malloc(sizeof(node));
 newnode->key=k;
 newnode->next=NULL;
 index=hf(k);
 if(ht[index]==NULL)
  ht[index]=newnode;
 else
 {
  temp=ht[index];
  while(temp->next!= NULL)
  temp = temp->next;
  temp->next=newnode;
 }
}

void search(int key)
{
 int index;
 node *temp;
 index = hf(key);
 for(temp=ht[index];temp!=NULL;temp=temp->next)
   if(temp->key==key)
   {
    printf("%d found",key);
    return;
   }
 printf("%d not found",key);
}

void deletekey(int key)
{
 int index;
 node * temp;
 index = hf(key);
 temp = ht[index];
 if((temp!=NULL)&&(temp->key==key))
   ht[index] = temp->next;
 else
  {
   for(temp=ht[index]; temp!=NULL; temp=temp->next)
   if(temp->next->key==key)
   {
    temp->next=temp->next->next;
    return;
   }
   printf("%d not found",key);
  }
}

void showTable()
{
 int i, index;
 node * temp;
 for(i=0;i<size;i++)
 {
  printf("%d |",i);
  for(temp=ht[i];temp!=NULL;temp=temp->next)
  printf("%d ->",temp->key);
  printf("NULL\n");
 }
}

void main()
{
  int ch,n,i,key;
  clrscr();
  do
  {
  printf("\n1: Insert \n2: Search \n3: Delete \n4: Display \n5: Exit");
  printf("\n Enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1: printf("\n How many element you want to enter");
	   scanf("%d",&n);
	   for(i=0;i<n;i++)
	   {
	   printf("\n Enter the value");
	   scanf("%d",&key);
	   insert(key);
	   }
	   break;
   case 2: printf("\n Enter the value to search");
	   scanf("%d",&key);
	   search(key);
	   break;
   case 3: printf("\n Enter the value to delete");
	   scanf("%d",&key);
	   deletekey(key);
	   break;
   case 4: showTable();
	   break;
  }
  }while(ch!=5);

}