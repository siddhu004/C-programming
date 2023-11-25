#include<Stdio.h>

void displayf(int ino)
{
    int icnt = 0;

    for(icnt = 1;icnt <= ino;icnt++)
    {
        printf("%d\t",icnt);
    }
}

int main()
{
    int ivalue = 0;

    printf("enter number: ");
    scanf("%d",&ivalue);

    displayf(ivalue);

    return 0;
}