

/*
 name :- kardile siddharth satish
 code :- break the number and cheak the given digit
        is present or not in the program
 input :- taking input form user
*/

#include<stdio.h>
#include<stdbool.h>

bool countdigit(int ino1,int ino2)
{
    int idigit = 0;
    int icnt = 0;
    if(ino1 < 0)
    {
        ino1 = -ino1;
    }
    while(ino1 != 0)
    {
        idigit = ino1 % 10;
        if(idigit == ino2)
        {
            return true;
        }
        ino1 = ino1 / 10;
    }
}

int main()
{
    int ivalue1 = 0;
    int ivalue2 = 0;
    bool bret = false;

    printf("enter value: \n");
    scanf("%d",&ivalue1);

    printf("enter digit to be search: \n");
    scanf("%d",&ivalue2);

    bret = countdigit(ivalue1,ivalue2);
    
    if(bret == true)
    {
        printf("%d is present in %d",ivalue2,ivalue1);
    }
    else
    {
        printf("%d is not present in %d",ivalue2,ivalue1);
    }
    return 0;
}
