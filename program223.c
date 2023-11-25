
#include<stdio.h>

void display(int ino)
{
    for(int icnt = 1;icnt <= ino;icnt++)
    {
        printf("* \t");
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