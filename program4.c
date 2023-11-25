//////////////////////////////////////////////////////////
//
// function name:   addition
// input:           put two numbers
// output:          display addition
// description:     performs addtion of two numbers
// author:          siddharth satish kardile
// date:            22/04/2023
//
///////////////////////////////////////////////////////////



//////////////////////////////////////////////////////////
//
//write a program to addition of two numbers
//
//////////////////////////////////////////////////////////

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
///////////////////////////////////////////////////////  