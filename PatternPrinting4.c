
/*
 name :- kardile siddharth satish
 code :- take a number form user and print the characcters in the program
 input :- taking input form user
*/

#include<stdio.h>
void display(int ino)
{
    int icnt = 0;
    char ch = 'a';
    for(icnt = 1;icnt <= ino;icnt++)
    {
        printf("%c \t",ch);
        ch++;
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