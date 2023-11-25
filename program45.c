#include<Stdio.h>

int factorial(int ino)
{
    int icnt = 1;
    int ifact = 1;

    while(icnt <= ino)
    {
        ifact = ifact * icnt;
        icnt++;
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