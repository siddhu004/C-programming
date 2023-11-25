
/*
 name :- kardile siddharth satish
 code :- break the number and display the average
     using typecasting in the float in the program
 input :- taking input form user
*/

#include<stdio.h>

float digitaverage(int ino)
{
    int idigit = 0;
    int isum = 0;
    int icount = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    while(ino != 0)
    {
        idigit = ino % 10;
        isum = isum +  idigit;
        icount++;
        ino = ino / 10;
    }
    return ((float)isum/(float)icount);
}

int main()
{
    int ivalue = 0;
    float iret = 0.0f;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    iret = digitaverage(ivalue);
    
    printf("average of digit is: %f\n",iret);

    return 0;
}