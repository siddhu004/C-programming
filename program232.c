#include<stdio.h>

void FactorR(int ino)
{  
    static int icnt = 1;
    if(icnt <= ino/2)
    {
        if((ino%icnt)==0)
        {
            printf("%d\n",icnt);
        }
        icnt++;
        FactorR(ino);
    }
}

int main()
{
    int ivalue = 0;
    int result = 0;

    printf("enter a number: ");
    scanf("%d",&ivalue);
    
    FactorR(ivalue);
    
    printf("end of main\n");
    
    return 0;
}