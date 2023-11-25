#include<stdio.h>

int strlenx(char *str)
{
    int icount = '\0';

    while(*str != '\0')
    {
        icount++;
        str++;
    }
    return icount;
}

int main()
{
    char arr[20];
    int iret = 0;

    printf("enter your name: \n");
    scanf("%[^'\n]s",arr);
     
    iret = strlenx(arr);

    printf("length of string is : %d",iret);
    
    return 0;
}