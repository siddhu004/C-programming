#include<stdio.h>
#include<stdbool.h>

bool strcmpx(char *str1,char *str2)
{ 
    while((*str1 != '\0') && (*str2 != '\0') && (*str1 == *str2))
    { 
        str1++;
        str2++;
    }
    return((*str1 == '\0') && (*str2 == '\0'));
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