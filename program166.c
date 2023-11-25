#include<stdio.h>

// A E I O U
// a e i o u

int strlenspacex(char *str)
{
    int icount = 0;

    while (*str != '\0')
    {
        if(*str == 'z')
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
     
    iret = strlenspacex(arr);

    printf("number of z is : %d",iret);
    
    return 0;
}