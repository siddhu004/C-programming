#include<stdio.h>
int a=5;
int b=10;

extern int c;
int main()
{
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
      return 0;
}