#include<stdio.h>
#define ERR_NOTFOUND -1

void strlwrx(char  *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("enter string: \n"); 
    scanf("%[^'\n]s",arr);

    strlwrx(arr);

    printf("String after editing is : %s\n",arr);

    return 0;
}