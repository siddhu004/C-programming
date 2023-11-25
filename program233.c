#include<stdio.h>

int StringI(char *str)
{
    int icnt = 0;

    while(*str != '\0')
    {
        icnt++;
        str++;
    }
    return icnt;
}

int main()
{
    char arr[20];
    int iret = 0;

    printf("enter a string: ");
    scanf("%[^'\n']s",arr);
    
    iret = StringI(arr);
    printf("Lenght of string is : %d\n",iret);
    
    printf("end of main\n");
    
    return 0;
}