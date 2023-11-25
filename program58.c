#include<stdio.h>

int countdigit(int ino1,int ino2)
{
    int idigit = 0;
    int icnt = 0;
    if(ino1 < 0)
    {
        ino1 = -ino1;
    }
    
    while(ino1 != 0)
    {
        idigit = ino1 % 10;
        if(idigit == ino2)
        {
            icnt++;
        }
        ino1 = ino1 / 10;
    }
    return icnt;
}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    int bret = 0;

    printf("enter value: \n");
    scanf("%d",&ivalue1);

    printf("enter digit for frequency: \n");
    scanf("%d",&ivalue2);

    bret = countdigit(ivalue1,ivalue2);
    
    printf("frequency of %d is %d",ivalue2,bret);

    return 0;
}
