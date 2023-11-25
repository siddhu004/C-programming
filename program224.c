
#include<stdio.h>

void display(int ino)
{
    int icnt = 0;
    while(icnt < ino)
    {
        printf("* \t");
        icnt++;
    }
}
int main()
{
    int ivalue = 0;
    printf("enter a number: ");
    scanf("%d",&ivalue);
    
    display(ivalue);

    return 0;
} 