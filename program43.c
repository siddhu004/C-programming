#include<Stdio.h>

void displayf(int ino)
{
    int icnt = 1;
    while(icnt <= ino)
    {
        printf("%d\t",icnt);
        icnt++;
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