#include<stdio.h>
#include<stdbool.h>

bool cheaksmall(char cvalue)
{
    if((cvalue >= 'a') && (cvalue <= 'z'))
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

    bret = cheaksmall(ch);

    if(bret == true)
    {
        printf("%c is a small letter\n",ch);
    }  
    else
    {
        printf("%c is not a small letter \n",ch);
    }
    return 0;
}