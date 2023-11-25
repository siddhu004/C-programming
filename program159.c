#include<stdio.h>

int main()
{
    char arr[20];
    printf("enter your name: \n");
    scanf("%[^'\n]s",arr);

    printf("your name is : %s",arr);
    
    return 0;
}