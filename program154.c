#include<stdio.h>
#include<stdbool.h>

bool cheakcapital(char cvalue)
{
    if((cvalue >= 'A') && (cvalue <= 'Z'))
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

    bret = cheakcapital(ch);

    if(bret == true)
    {
        printf("%c is a capital letter\n",ch);
    }  
    else
    {
        printf("%c is not a capital letter \n",ch);
    }
    return 0;
}