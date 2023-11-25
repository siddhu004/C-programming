
/*
 name :- kardile siddharth satish
 code :- calculate power of the number in the program using typedef unsigned long
 input :- taking power and base input form user
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned long int ULONG;

ULONG calculatepower(int ibase,int ipower)
{
    ULONG result = 1;
    int icnt = 0;

    if((ibase < 0)||(ipower < 0))
    {
        return 0;
    }

    for(icnt = 1;icnt<=ipower;icnt++)
    {
        result = result * ibase;
    }
    return result;
}

int main()
{
    long int ivalue1 = 0,ivalue2 = 0;
    ULONG iret = 0;

    printf("enter base : \n");
    scanf("%d",&ivalue1);

    printf("enter power : \n");
    scanf("%d",&ivalue2);
    
    iret = calculatepower(ivalue1,ivalue2);
    
    printf("%d",iret);

    return 0;
}