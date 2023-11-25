#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5];
    int icnt = 0;

    printf("enter the elements: \n");
    for(icnt = 0;icnt < 5;icnt++)
    {
       scanf("%d",&arr[icnt]);
    }
    
    printf("elements of array are:  \n");
    for(icnt = 0;icnt < 5;icnt++)
    {
       printf("%d\n",arr[icnt]);
    }
    
    return 0;
}