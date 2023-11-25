#include<stdio.h>
#include<stdbool.h>

int calculatepower(int ibase,int ipower)
{
    int result = 1;
    int icnt = 1;
    while(icnt<=ipower)
    {
        result = result * ibase;
        icnt++;
    }
    return result; 
}

int main()
{
    int ivalue1 = 0,ivalue2 = 0;
    int iret = 0;

    printf("enter base : \n");
    scanf("%d",&ivalue1);

    printf("enter power : \n");
    scanf("%d",&ivalue2);
    
    iret = calculatepower(ivalue1,ivalue2);
    
    printf("%d",iret);

    return 0;
}