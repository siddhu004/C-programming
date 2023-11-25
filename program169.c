#include<stdio.h>
#include<stdlib.h>

// A E I O U
// a e i o u

int countcharx(char *str,char cvalue)
{
    int icount = 0;

    while (*str != '\0')
    {
        if(*str == cvalue)
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
    char ch = '\0';
    int iret = 0;

    printf("enter your name: \n");
    scanf("%[^'\n]s",arr);

    fflush(stdin);
     
    printf("enter the caracter: \n");
    scanf("%c",&ch);

    iret = countcharx(arr,ch);

    printf("number of occurance is : %d\n",iret);
    
    return 0;
}