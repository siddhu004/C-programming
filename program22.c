
#include<stdio.h>

void displayfactors(int ino)
{
    int icnt = 0;
    for(icnt=1;icnt<=ino;icnt++)
    {
        if((ino % icnt) == 0)
        {
            printf("%d\n",icnt);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("\n enter the number : ");
    scanf("%d",&ivalue);

    displayfactors(ivalue);
    return 0;
}