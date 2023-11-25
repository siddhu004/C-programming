#include<stdio.h>

void displaydigit(int ino)
{
    int idigit = 0;
    
    for(;ino != 0;ino=ino/2)
    {
        idigit = ino % 10;
        printf("%d\n",idigit);
    }
}
int main()
{
    int ivalue = 0;

    printf("enter value: \n");
    scanf("%d",&ivalue);

    displaydigit(ivalue);

    return 0;
}
