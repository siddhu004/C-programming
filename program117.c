
#include<stdio.h>
void display(int row,int col)
{
    int j = 0;
    int i = 0;
    char ch = 'a';

    for(i = 1;i <= row;i++)
    {
        for(j = 1;j <= col;j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
        ch++;
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