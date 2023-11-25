
/*
 name :- kardile siddharth satish
 code :-  matrix printing in * in the program
 input :- taking input form user
*/


#include<stdio.h>
void display(int row,int col)
{
    int icnt = 0;
    int i = 0;

    for(i = 1;i <= row;i++)
    {
        for(icnt = 1;icnt <= col;icnt++)
        {
            printf("* \t");
        }
        printf("\n");
    }
}

int main()
{
    int icol = 0;
    int irow = 0;

    printf("enter how many rows: ");
    scanf("%d",&irow);
    
    printf("enter how many columns: ");
    scanf("%d",&icol);

    display(irow,icol);
    
    return 0;
}   