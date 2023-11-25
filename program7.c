////////////////////////////////////////////////////
//
// take input from user and cheak wheather their two 
// number are divisible by 3 and 5 
//
///////////////////////////////////////////////////


///////////////////////////////////////////////////

// function name - cheak divisible by 3 and 5
// input -         integer
// output -        boolean
// author -        siddharth satish kardile
// date -          06/05/2023
// update date -   no udate yet...

///////////////////////////////////////////////////

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