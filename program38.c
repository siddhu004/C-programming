#include<Stdio.h>

void displayb(int ino)
{
    int icnt = 0;

    for(icnt = ino;icnt >= 1;icnt--)
    {
        printf("%d\t",icnt);
    }
}

int main()
{
    int ivalue = 0;

    printf("enter number: ");
    scanf("%d",&ivalue);

    displayb(ivalue);

    return 0;
}