#include<stdio.h>
// travel till the end of dest

void strcatx(char *src,char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }
    *dest = ' ';
    dest++;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[20]="Demo";

    printf("enter string: \n");
    scanf("%[^'\n']s",arr);
    
    strcatx(arr,brr);

    printf("string after copy is : %s\n",brr);

    return 0;
}