#include<Stdio.h>


int factorial(int ino)
{
    int icnt = 0;
    int ifact = 1;

    for(icnt = ino;icnt >= 1;icnt--)
    {
        ifact = ifact * icnt;
    }
    return ifact;
}

int main()
{
    int iret = 0;
    int ivalue = 0;

    printf("enter number: ");
    scanf("%d",&ivalue);

    iret = factorial(ivalue);
    
    printf("result is %d",iret);

    return 0;
}