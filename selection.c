#include<stdio.h>
int main()
{
    int a=0;
    
    printf("enter number");
    scanf("%d",&a);
    
    if((a%2)==0)
    {
        printf("it is even number");
   
    }
    else
    {
         printf("it is odd number");
    }
    
       return 0;
}