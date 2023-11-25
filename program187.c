#include<stdio.h>

void strcpyrevx(char *src,char *dest)
{
    int ilength = 0;

    while(*src != '\0')
    {
        src++;
        ilength++;
    }
    src--;

    while (ilength != 0)
    {
        *dest = *src;
        src--;
        dest++;
        ilength--;
    }
    *dest = '\0';
    
}

int main()
{
    char arr[20];
    char brr[20];

    printf("enter string: \n");
    scanf("%[^'\n']s",arr);
    
    strcpyrevx(arr,brr);

    printf("string after copy is : %s\n",brr);

    return 0;
}