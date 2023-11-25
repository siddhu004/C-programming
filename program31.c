#include<stdio.h>
#include<stdbool.h>

bool chkprime(int ino)
{
    int icnt = 0;

    for(icnt=2;icnt<=(ino/2);icnt++)
    {
        if((ino % icnt)==0)
        {
            break;
        }
    }
    if(icnt == (ino/2)+1)
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
    int ivalue = 0;
    bool bret = false;

    printf("enter number : \n");
    scanf("%d",&ivalue);
    
    bret = chkprime(ivalue);

    if(bret == true)
    {
        printf("%d is prime number",ivalue);
    }
    else
    {
        printf("%d is not prime number \n",ivalue);
    }

    return 0;
}