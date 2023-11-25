
/*
 name :- kardile siddharth satish
 code :- cheak the perfect of the number program
 input :- taking input form user
*/

#include<stdio.h>
#include<stdbool.h>

bool cheakperfect(int inumber)
{
    int result = 0;
    result = sumfactors(inumber);

    if(result == inumber)
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
    int ivalue = 0;
    bool bret = false;
    
    printf("Enter value: \n");
    scanf("%d",&ivalue);
 
    bret = cheakperfect(ivalue);

    if(bret == true)
    {
        printf("%d is perfect number",ivalue);
    }
    else
    {
        printf("%d is not a perfect number",ivalue);
    }

    return 0;
}