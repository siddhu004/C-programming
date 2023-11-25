#include<stdio.h>
#define size 10
int ht[size];
void init()
{
  int i;
  for(i=0;i<size;i++)
   ht[i]=-1;
}
void division_method(int value)
{
 int key = value % size;
 if(ht[key]==-1)
  {
   ht[key] = value;
   printf("%d inserted at ht[%d] \n",value,key);
  }
 else
 {
  printf("Collision : ht[%d] has element %d already! \n",key, ht[key]);
  printf("Unable to insert %d\n",value);
 }
}

void mid_square(int value)
{
  int square = value*value;
  int mid = square /100 % 100;
  int key = mid % size;
  if(ht[key]==-1)
  {
   ht[key] = value;
   printf("%d inserted at ht[%d] \n",value,key);
  }
 else
 {
  printf("Collision : ht[%d] has element %d already! \n",key, ht[key]);
  printf("Unable to insert %d\n",value);
 }
}

void folding(int value)
{
  int sum = 0,key,value1=value;
  while(value>0)
  {
   sum+=value%10;
   value/=10;
  }
  key = sum % size;
  if(ht[key]==-1)
  {
   ht[key] = value1;
   printf("%d inserted at ht[%d] \n",value1,key);
  }
 else
 {
  printf("Collision : ht[%d] has element %d already! \n",key, ht[key]);
  printf("Unable to insert %d\n",value);
 }
}
 void del(int value)
 {
  int key = value % size;
  if(ht[key] == value)
   ht[key] = -1;
  else
   printf("%d not present in the hash table \n",value);
 }

 void search(int value)
 {
  int key = value % size;
  if(ht[key] == value)
   printf("%d is present at position ht[%d] in hash table",value,key);
  else
   printf("%d not present in the hash table \n",value);
 }

 void print()
 {
  int i;
  for(i=0;i<size;i++)
    printf("ht[%d] = %d\n",i,ht[i]);
 }

 void main()
 {
  int n, value,i,ch;
  clrscr();
  init();
  do
  {
  printf("1: division method \n2:mid square method \n3: folding method");
  printf("\n4: Display \n5: search \n6: delete \n7: exit");
  printf("Enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
  printf("How many values you wants to enter ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   printf("\n Enter the element");
   scanf("%d",&value);
   division_method(value);
  }
  break;
  case 2:
  printf("How many values you wants to enter ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   printf("\n Enter the element");
   scanf("%d",&value);
   mid_square(value);
  }
  break;
  case 3:
  printf("How many values you wants to enter ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   printf("\n Enter the element");
   scanf("%d",&value);
   folding(value);
  }
  break;
  case 4: print();
  break;
  case 5:
  printf("Enter the element to search");
  scanf("%d",&value);
  search(value);
  break;
  case 6:
  printf("Enter the element to delete");
  scanf("%d",&value);
  del(value);
  break;
  }
  }while(ch!=7);
  getch();
 }