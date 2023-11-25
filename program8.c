////////////////////////////////////////////////////
//
// write a program which accept marks and 
//           display the class accordingly
//
///////////////////////////////////////////////////


//////////////////////////////////////////////////
//
//    1 to 34   fail
//    35 to 49  pass
//    50 to 59  second
//    60 to 74  first
//    75 to 100 first class with distinction
//
///////////////////////////////////////////////////


///////////////////////////////////////////////////

// function name - cheak class
// input -         integer
// output -        integer
// author -        siddharth satish kardile
// date -          06/05/2023
// update date -   no udate yet...

///////////////////////////////////////////////////

#include<stdio.h>

// function add
void CheakResult(float fmarks)
{
    if((fmarks < 0.0f) || (fmarks > 100.0))
    {
        printf("\n invalid output");
        printf("\n please enter the marks in between 0 to 100");
        return;
    }
    
    
    if((fmarks >= 0.0f) && (fmarks < 35.00f))
    {
        printf("\n you are failed");
    }
      else if((fmarks >= 35.00f) && (fmarks < 50.00f))
    {
        printf("\n you got pass class ");
    }
      else if((fmarks>= 50.0f) && (fmarks < 60.0f))
    {
        printf("\n you got second class ");
    }
    else if((fmarks>= 60.0f) && (fmarks < 75.0f))
    {
        printf("\n you got first class ");
    } 
    else if((fmarks >= 75.0f) && (fmarks <= 100.0f))
    {
        printf("\n you got first class with distinction");
    }
    
    
    
}
////////////////////////////////////////
//
//        entry point function
//
////////////////////////////////////////

int main()
{
    float fvalue = 0.0f;

    printf("\n enter a percentage : ");
    scanf("%f",&fvalue);

    CheakResult(fvalue);

    return 0;
}
