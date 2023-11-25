#include<stdio.h>
#include<stdbool.h>

int sumfactors(int ino)
{
    int icnt = 0;
    int isum = 0;

    if(ino < 0)
    {
        ino = -ino;
    }

    for(icnt = 1;icnt <= (ino/2);icnt++)
    {
        if((ino % icnt) == 0)
        {
            isum = isum + icnt;
        }
    }
    return isum;
}
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