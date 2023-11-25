#include<stdio.h>
#include<stdbool.h>

bool strcmpx(char *str1,char *str2)
{ 
    while((*str1 != '\0') && (*str2 != '\0'))
    {
        if(*str1 != *str2)     // letters are different
        {
            if((*str1 >= 'a') && (*str1 <= 'z'))  // first letter is small
           {
            if(*str1 != (*str2 + 32))
            {
                break;
            }
            }
            else if((*str1 >= 'A') && (*str1 <= 'Z'))   // first letter is capital
            {
            if(*str1 != (*str2 - 32))
            {
                break;    
            }
            }
            else        // special letters and symbols
            {
                break;
            }
        }
        str1++;
        str2++;
    }
    if((*str1 == '\0') && (*str2 == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    } 
}

int main()
{
    char arr[20];
    char brr[20];
    bool bret = false;

    printf("enter first string: \n");
    scanf("%[^'\n']s",arr);
    
    printf("enter second string: \n");
    scanf(" %[^'\n']s",brr);

    bret = strcmpx(arr,brr);

    if(bret == true)
    {
        printf("both the string are identical\n");
    }
    else
    {
        printf("both the string are different\n");
    }
    
    return 0;
}