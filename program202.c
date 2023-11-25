#include<stdio.h>
#include<stdbool.h>

bool chkpalindromex(char *str)
{
    char *start = NULL;
    char *end = NULL;
    bool bflag = true;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            bflag = false;
            break;
        }
        start++;
        end--;
    }
    return bflag;
}

int main()
{
    char arr[20];
    bool bret = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s",arr);

    bret = chkpalindromex(arr);

    if(bret == true)
    {
        printf("string is pallindrome \n");
    }
    else
    {
        printf("string is not pallindrome \n");
    }

    return 0;
}