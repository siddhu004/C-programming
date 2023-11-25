
#include<stdio.h>
void display(int row,int col)
{
    int j = 0;
    int i = 0;
    
    char arr[2] = {'*','#'};

    for(i = 1;i <= row;i++)
    {
        for(j = 1;j <= col;j++)
        {
            printf("%c\t",arr[i%2]);
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