
/*
 name :- kardile siddharth satish
 code :- cheaking the number is divide by 3 and 5 program
 input :- taking a number from user
*/

#include<stdio.h>
#include<stdbool.h>

// function add
bool CheakDivisible(int ino)
{
    if(((ino % 3) == 0) &&  ((ino % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
} 

////////////////////////////////////////
//
//        entry point function
//
////////////////////////////////////////

int main()
{
    int no;
    bool bret=false;

    printf("\n enter a number : ");
    scanf("%d",&no);

    bret=CheakDivisible(no);

    if(bret==true)
    {
        printf("\n %d is a divisible by 3 and 5",no);
    }
    else
    {
        printf("\n %d is not divisible by 3 and 5",no);
    }

    return 0;
}

/*

Logical operators

1: Logical AND &&
2: Logical OR  ||


---------------------------------------------
Expression1     Expression2      &&     ||
---------------------------------------------
true            true            true    true
true            false           false   true
false           true            false   false
false           false           false   true
---------------------------------------------

*/ 