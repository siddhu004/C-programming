#include<stdio.h>

void displayI(int ino)
{
    int idigit = 0;
    if(ino != 0)
    {
        idigit = ino%10;
        printf("%d\t",idigit);
        ino = ino/10;
        displayI(ino);   // tail recursion
    }    
}

int main()
{
    int ivalue = 0;

    printf("enter a number: ");
    scanf("%d",&ivalue);
    
    displayI(ivalue);

    printf("end of main\n");
    
    return 0;
}