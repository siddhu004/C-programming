#include<stdio.h>

int displaydigit(int ino)
{
    int icnt = 0;

    while(ino != 0)
    {
        icnt++;
        ino = ino / 10;
    }
    return icnt;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter value: \n");
    scanf("%d",&ivalue);
    
    iret=displaydigit(ivalue);

    printf("\n Number of digits is %d",iret);

    return 0;
}