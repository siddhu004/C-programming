#include<stdio.h>

void displayI(int ino)
{
    static int icount = 1;
    while (icount <= ino)
    {
        printf("%d\t",icount);
        icount++;
        displayI(ino);
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