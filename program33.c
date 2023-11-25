#include<stdio.h>
#include<stdbool.h>

int calculatepower(int ibase,int ipower)
{
    long int iresult = 1;
    int icnt = 0;

    for(icnt = 1;icnt<=ipower;icnt++)
    {
        iresult = iresult * ibase;
    }
    return iresult;
}

int main()
{
    int ivalue1 = 0,ivalue2 = 0;
    long int iret = 0;

    printf("enter base : \n");
    scanf("%d",&ivalue1);

    printf("enter power : \n");
    scanf("%d",&ivalue2);
    
    iret = calculatepower(ivalue1,ivalue2);
    
    printf("%d",iret);

    return 0;
}