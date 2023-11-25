#include<stdio.h>

void strlwrx(char  *str)
{
    int gap = 'a' - 'A';
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - gap;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + gap;
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