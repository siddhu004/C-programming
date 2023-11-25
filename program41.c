#include<Stdio.h>

typedef unsigned long int ULONG;

ULONG factorial(int ino)
{
    int icnt = 0;
    ULONG ifact = 1;

    for(icnt = ino;icnt >= 1;icnt--)
    {
        ifact = ifact * icnt;
    }
    return ifact;
}

int main()
{
    ULONG iret = 0;
    int ivalue = 0;

    printf("enter number: ");
    scanf("%d",&ivalue);

    iret = factorial(ivalue);
    
    printf("result is %d",iret);

    return 0;
}