#include<stdio.h>

int smalldigit(int ino)
{
    int idigit = 0;
    int icnt = 9;
    if(ino < 0)
    {
        ino = -ino;
    }
    
    while(ino != 0)
    {
        idigit = ino % 10;
        if(icnt > idigit)
        {
            icnt = idigit;
        }
        if(icnt == 0)
        {
            break;
        }
        ino = ino / 10;
    }
    return icnt;
}

int main()
{
    int ivalue = 0;
    int bret = 0;

    printf("enter value: \n");
    scanf("%d",&ivalue);

    bret = smalldigit(ivalue);
    
    printf("small digits is: %d",bret);

    return 0;
}
