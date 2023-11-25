#include<stdio.h>

int FactorI(int ino)
{  
    int fact = 0;
    int icnt = 1;
    while(icnt <= ino/2)
    {
        if((ino%icnt)==0)
        {
            printf("%d\n",icnt);
        }
        icnt++;
    }
    return fact;
}

int main()
{
    int ivalue = 0;
    int result = 0;

    printf("enter a number: ");
    scanf("%d",&ivalue);
    
    result = FactorI(ivalue);
    printf("factor is : %d\n",result);

    printf("end of main\n");
    
    return 0;
}