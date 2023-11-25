
/*
 name :- kardile siddharth satish
 code :- display number in the descending order in the program
 input :- taking input form user
*/

#include<Stdio.h>

void displayf(int ino)
{
    int icnt = 0;

    for(icnt = ino;icnt >= 1;icnt--)
    {
        printf("%d\t",icnt);
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