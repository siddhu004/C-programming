// display jay ganesh on screen 5 times


#include<stdio.h>

void display(int ino)
{
    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("jay ganesh...\n");
    }
}


//example of iteration

int main()
{
    int ivalue = 0;

    printf("\n enter the freqency of jay ganesh statement: ");
    scanf("%d",&ivalue);

    display(ivalue);
    return 0;
} 