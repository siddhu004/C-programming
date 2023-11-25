#include<stdio.h>

void strncpyx(char *src,char *dest,int ilength)
{
    while((*src != '\0') && (ilength != 0))
    {
        *dest = *src;
        src++;
        dest++;
        ilength--;
    }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[20];
    int ino = 0;

    printf("enter string: \n");
    scanf("%[^'\n']s",arr);

    printf("how many letter you want to copy: \n");
    scanf("%d",&ino);
    
    strncpyx(arr,brr,ino);

    printf("string after copy is : %s\n",brr);

    return 0;
}