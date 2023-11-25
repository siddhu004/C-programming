

#include<stdio.h>
void display(int ino)
{
    int icnt = 0;
    char ch = '\0';
    for(icnt = 1,ch = 'A';icnt <= ino;icnt++,ch++)
    {
        printf("%c\t%d\t",ch,icnt);
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