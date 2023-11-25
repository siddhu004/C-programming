#include<stdio.h>

int reversenumber(int ino)
{
    int idigit = 0;
    int ireverse = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    while (ino != 0)
    {
        idigit = ino % 10;
        ireverse = (ireverse * 10)+idigit;
        ino = ino / 10;
    }
    return ireverse;
}

int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    iret = reversenumber(ivalue);
    printf("reverse number is %d \n",iret);

    return 0;
}