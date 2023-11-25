#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[5];

    printf("enter the elements: \n");
    scanf("%d",&arr[0]);
    scanf("%d",&arr[1]);
    scanf("%d",&arr[2]);
    scanf("%d",&arr[3]);
    scanf("%d",&arr[4]);
    

    printf("elements of array are:  \n");
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
    
    return 0;
}