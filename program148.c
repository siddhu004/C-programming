
#include<stdio.h>
void display(int row,int col)
{
    int j = 0;
    int i = 0;
    
    for(i = row;i >= 1;i--)
    {
        for(j = col;j >= 1;j--)
        {
            if(i >= j)
            {
                printf("*\t");
            }
            else
            {
                printf(" \t");
            }
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