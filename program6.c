// write a program which cheak wheather number is even or odd

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////

// function name - cheakevenodd
// input -         integer
// output -        boolean
// author -        siddharth satish kardile
// date -          24/04/2023
// update date -   no udate yet...

///////////////////////////////////////////////////

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

///////////////////////////////////////////////////

//          entry point Function class 

///////////////////////////////////////////////////
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


/*
    11*2
    11/2
    11%2
*/