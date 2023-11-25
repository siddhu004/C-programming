#include<stdio.h>

int StringR(char *str)
{
    static int icnt = 0;

    if(*str != '\0')
    {
        icnt++;
        str++;
        StringR(str);
    }
    return icnt;
}

int main()
{
    char arr[20];
    int iret = 0;

    printf("enter a string: ");
    scanf("%[^'\n']s",arr);
    
    iret = StringR(arr);
    printf("Lenght of string is : %d\n",iret);
    
    printf("end of main\n");
    
    return 0;
}