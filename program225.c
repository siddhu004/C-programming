#include<stdio.h>

void displayR(int ino)
{
    static int icnt = 1;

    if(icnt <= ino)
    {
        printf("* \t");
        icnt++;
        displayR(ino);      // recursive call
    }
}

int main()
{
    int ivalue = 0;

    printf("enter a number: ");
    scanf("%d",&ivalue);
    
    displayR(ivalue);

    printf("end of main\n");
    
    return 0;
} 