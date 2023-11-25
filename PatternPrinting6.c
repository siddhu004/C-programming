
/*
 name :- kardile siddharth satish
 code :- take a number form user and print the number in ascending order as well as descending order in the negative for in the program
 input :- taking input form user
*/

#include<stdio.h>
void display(int ino)
{
    int icnt = 0;
    for(icnt = -ino;icnt <= 0;icnt++)
    {
        printf("%d\t",icnt);
    }
    for(icnt = 1;icnt <= ino;icnt++)
    {
        printf("%d\t",icnt);
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