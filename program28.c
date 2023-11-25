#include<stdio.h>
#include<stdbool.h>


bool cheakperfect(int ino)
{
    int icnt = 0;
    int isum = 0;

    for(icnt = 1;icnt <= (ino/2);icnt++)
    {
        if((ino % icnt) == 0)
        {
            isum = isum + icnt;
        }
    }
    if(isum = ino)
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

    printf("enter value: \n");
    scanf("%d",&ivalue);

    bret =  cheakperfect(ivalue);

    if(bret == true)
    {
        printf("%d is a perfect number",ivalue);
    }
    else
    {
        pritnf("%d is not a perfect number",ivalue);
    }

    return 0;
}