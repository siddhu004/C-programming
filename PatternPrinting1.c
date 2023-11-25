
/*
 name :- kardile siddharth satish
 code :- take a number form user and print the # in the pattern format in the program
 input :- taking input form user
*/

#include<stdio.h>
void display(int ino)
{
    int icnt = 0;
    for(icnt = 0;icnt < ino;icnt++)
    {
        printf("# \t");
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