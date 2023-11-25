
/*
 name :- kardile siddharth satish
 code :- addition of two number program
 input :- taking input form user
*/

#include<stdio.h>
unsigned int addition(unsigned int ivalue1,int ivalue2)
{
     return ivalue1+ivalue2;
}
int main()
{
    unsigned  int ino1 = 0,ino2 = 0,ians = 0;

    printf("\n enter first  number: ");
    scanf("%d",&ino1);
    
    printf("\n enter second  number: ");
    scanf("%d",&ino2);

    ians=addition(ino1,ino2);

    printf("\n addition of two numbers: %d",ians);

    return 0;
}