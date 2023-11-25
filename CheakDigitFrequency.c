

/*
 name :- kardile siddharth satish
 code :- break the number and cheak the given digit
        is present in the number or not and if digit
        found then increase a counter by one in the program
 input :- taking input form user
*/

#include<stdio.h>

int countdigit(int ino)
{
    int idigit = 0;
    int icnt = 0;
    while(ino != 0)
    {
        idigit = ino % 10;
        if(idigit == 8)
        {
            icnt++;
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

    bret = countdigit(ivalue);
    
    printf("the frequency 8 in %d is %d",ivalue,bret);
    return 0;
}
