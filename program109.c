
#include<stdio.h>
void display(int ino)
{
    int icnt = 0;
    for(icnt = 1;icnt <= ino;icnt++)
    {
        printf("%d\t",icnt );
    }
    for(icnt = ino-1;icnt > 0;icnt--)
    {
        printf("%d\t",icnt );
    }
}

int main()
{
    int ifrequency = 0;
    printf("enter the frequency of symbol: \n");
    scanf("%d",&ifrequency);

    display(ifrequency);

    return 0;
}  