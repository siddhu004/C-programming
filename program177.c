#include<stdio.h>
#define ERR_NOTFOUND -1

void Editstring(char  *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = '*';
        }
        str++;
    }
}

int main()
{
    char arr[20];

    printf("enter string: \n"); 
    scanf("%[^'\n]s",arr);

    Editstring(arr);

    printf("String after editing is : %s\n",arr);

    return 0;
}