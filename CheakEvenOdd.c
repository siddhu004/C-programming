
/*
 name :- kardile siddharth satish
 code :- cheaking the number is even or odd program
 input :- taking a number from user
*/

#include<stdio.h>
#include<stdbool.h>

bool CheakEvenOdd(int ino)
{
    if((ino%2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int ivalue = 0;               //variable to accept input 
    bool bret = false;            //variable to accept return value

    printf("\n please enter number to cheak wheather it is even or odd : ");
    scanf("%d",&ivalue);

    bret = CheakEvenOdd(ivalue);  //function call 

    if(bret == true)
    {
        printf("%d is even number\n",ivalue);
    }
    else
    {
        printf("%d is odd number\n",ivalue);
    }
    return 0; 
}

