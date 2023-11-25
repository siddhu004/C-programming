#include<stdio.h>

int strlensmallx(char *str)
{
    int icount = 0;

    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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
     
    iret = strlensmallx(arr);

    printf("length of small letter is : %d",iret);
    
    return 0;
}