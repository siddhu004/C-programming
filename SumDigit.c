
/*
 name :- kardile siddharth satish
 code :- break the number and display sum of all digits in the program
 input :- taking input form user
*/
#include<stdio.h>

int countdigit(int ino)
{
    int icnt = 0;
    int isum = 0;
    int idigit = 0;

    while(ino != 0)
    {
        idigit = ino %10;
        isum = isum + idigit;
        ino = ino / 10;
    }
    return isum;
}
int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("enter value: \n");
    scanf("%d",&ivalue);
    
    iret=countdigit(ivalue);

    printf("\n sum of digits is %d",iret);

    return 0;
}