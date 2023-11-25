#include<stdio.h>
#include<stdbool.h>

bool cheakdigit(char cvalue)
{
    if((cvalue >= '0') && (cvalue <= '9'))
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
    char ch = '\0';
    bool bret = false;

    printf("enter character: \n");
    scanf("%c",&ch);

    bret = cheakdigit(ch);

    if(bret == true)
    {
        printf("%c is a digit\n",ch);
    }  
    else
    {
        printf("%c is not a digit \n",ch);
    }
    return 0;
}