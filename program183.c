#include<stdio.h>

void strcpyx(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[20];

    printf("enter string: \n");
    scanf("%[^'\n']s",arr);
    
    strcpyx(arr,brr);

    printf("string after copy is : %s\n",brr);

    return 0;
}