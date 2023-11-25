#include<stdio.h>

int strlencapitalx(char *str)
{
    int icount = 0;

    while (*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            icount++;
        }
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
     
    iret = strlencapitalx(arr);

    printf("length of capital letter is : %d",iret);
    
    return 0;
}