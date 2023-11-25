#include<stdio.h>

void strcpysmall(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[20];

    printf("enter string: \n");
    scanf("%[^'\n']s",arr);
    
    strcpysmall(arr,brr);

    printf("string after copy is : %s\n",brr);

    return 0;
}