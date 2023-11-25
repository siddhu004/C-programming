#include<stdio.h>
#include<stdbool.h>

bool displaydigit(int ino)
{
    int idigit = 0;
    while(ino != 0)
    {
        idigit = ino % 10;
        if(idigit == 8)
        {
            return true;
        }
        else
        {
            return false;
        }
        ino = ino / 10;
    }
}
int main()
{
    int ivalue = 0;
    bool bret = false;

    printf("enter value: \n");
    scanf("%d",&ivalue);

    bret = displaydigit(ivalue);
    
    if(bret == true)
    {
        printf("digit 8 is found in %d",ivalue);
    }
    else
    {
        printf("digit 8 is not found in %d",ivalue);
    }
    return 0;
}
