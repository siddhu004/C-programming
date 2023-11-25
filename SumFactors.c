
/*
 name :- kardile siddharth satish
 code :- sum the factors of the number program
 input :- taking input form user
*/

#include<stdio.h>

int sumfactors(int ino)
{
    int icnt = 0;
    int isum = 0;
    for(icnt = 1;icnt <= (ino/2);icnt++)
    {
        if((ino % icnt) == 0)
        {
            isum = isum + icnt;
        }
    }
    return isum;
}

int main()
{
    int ivalue = 0;
    int iret = 0;

    printf("Enter number: \n");
    scanf("%d",&ivalue);
    
    iret = sumfactors(ivalue);
    printf("%d",iret);

    return 0;
}