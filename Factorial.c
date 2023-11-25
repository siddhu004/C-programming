

/*
 name :- kardile siddharth satish
 code :- multiply the factor of the number and display it in the program
 input :- taking input form user
*/

#include<Stdio.h>

int factorial(int ino)
{
    int icnt = 0;
    int ifact = 1;

    for(icnt = 1;icnt <= ino;icnt++)
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