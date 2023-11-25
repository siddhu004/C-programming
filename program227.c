#include<stdio.h>

void displayI(int ino)
{
    if(ino != 0)
    {
        printf("%d\t",ino%10);
        ino = ino/10;
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