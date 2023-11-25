#include<stdio.h>

int strlendigitx(char *str)
{
    int icount = 0;

    while (*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
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
     
    iret = strlendigitx(arr);

    printf("length of  letter is : %d",iret);
    
    return 0;
}