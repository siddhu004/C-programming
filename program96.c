

#include<stdio.h>
void display(int ino)
{
    int icnt = 0;
    for(icnt = 0;icnt < ino;icnt++)
    {
        printf("A \t");
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