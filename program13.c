#include<stdio.h>

void display(int ino)
{
    int icnt=0;
    if(ino < 0)    //filter
    {
        printf("\n please enter the positive number...");
        return;
    }
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("jay ganesh...\n");
    }
}

int main()
{
    int ivalue = 0;

    printf("\n enter the freqency of jay ganesh statement: ");
    scanf("%d",&ivalue);

    display(ivalue);
    return 0;
} 