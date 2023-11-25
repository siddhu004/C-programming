#include<stdio.h>
#define ERR_NOTFOUND -1

void frequency(char *str)
{
    int ismallcnt = 0;
    int icapcnt = 0;
    while (*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            ismallcnt++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            icapcnt++;
        }
        str++;
    }
    printf("small character count: %d\n",ismallcnt);
    printf("capital character count: %d\n",icapcnt);   
}

int main()
{
    char arr[20];

    printf("enter string: \n"); 
    scanf("%[^'\n]s",arr);

    frequency(arr);

    return 0;
}