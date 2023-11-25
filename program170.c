#include<stdio.h>

int firstoccurance(char *str,char cvalue)
{
    int icnt = 1;
    int ipos = 0;

    while (*str != '\0')
    {
        if(*str == cvalue)
        {
            ipos = icnt;
            break;
        }
        str++;
        icnt++;
    }
    return ipos;
}

int main()
{
    char arr[20];
    char ch = '\0';
    int iret = 0;

    printf("enter string: \n");
    scanf("%[^'\n]s",arr);

    printf("enter the chracter: \n");
    scanf(" %c",&ch);
    
    iret = firstoccurance(arr,ch);

    printf("first occurance at that character is at : %d\n",iret);
    
    return 0;
}