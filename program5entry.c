#include"program5header.h"

///////////////////////////////////////////////////////////
//
//  write a program to addition of two numbers
//
//////////////////////////////////////////////////////////

int main()
{
    unsigned  int ino1 = 0,ino2 = 0,ians = 0;

    printf("\n enter first  number: ");
    scanf("%d",&ino1);
    
    printf("\n enter second  number: ");
    scanf("%d",&ino2);

    ians=Addition(ino1,ino2);

    printf("\n addition of two numbers: %d",ians);
    return 0;
}