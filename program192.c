#include<stdio.h>
// travel till the end of dest

void strncatx(char *src,char *dest,int ilength)
{
    while(*dest != '\0')
    {
        dest++;
    }
    
    while ((*src != '\0') && (ilength != 0))
    {
        *dest = *src;
        dest++;
        src++;
        ilength--;
    }
    *dest = '\0';
}

int main()
{
    char arr[20];
    char brr[20]="Demo";
    int ino = 0;

    printf("enter string: \n");
    scanf("%[^'\n']s",arr);

    printf("how many letter you want to copy: \n");
    scanf("%d",&ino);
    
    strncatx(arr,brr,ino);

    printf("string after copy is : %s\n",brr);

    return 0;
}