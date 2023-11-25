#include<Stdio.h>

void displayf(int ino)
{
    int icnt = ino;
    while(icnt > 0)
    {
        printf("%d\t",icnt);
        icnt--;
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