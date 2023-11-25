#include<stdio.h>
#include<stdbool.h>


bool strlenspacex(char *str)
{
    while (*str != '\0')
    {
        if(*str == 'z')
        {
            return true;
        }
    }
    return false;
}

int main()
{
    char arr[20];
    bool iret = false;

    printf("enter your name: \n");
    scanf("%[^'\n]s",arr);
     
    iret = strlenspacex(arr);
    
    if(iret == true)
    {
        printf("z is present");
    }
    else
    {
        printf("z is not present");
    }
    
    return 0;
}