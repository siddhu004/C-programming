#include<stdio.h>

int maxdigit(int ino)
{
    int idigit = 0;
    int imax = 0;
    if(ino < 0)
    {
        ino = -ino;
    }
    
    while(ino != 0)
    {
        idigit = ino % 10;
        if(idigit > imax)
        {
            imax = idigit;
        }
        if(imax == 9)
        {
            break;
        }
        ino = ino / 10;
    }
    return imax;
}

int main()
{
    int ivalue = 0;
    int bret = 0;

    printf("enter value: \n");
    scanf("%d",&ivalue);

    bret = maxdigit(ivalue);
    
    printf("maximum digits is: %d",bret);

    return 0;
}
