
#include<stdio.h>
void display(int row,int col)
{
    int j = 0;
    int i = 0;
    char ch = '\0';
    for(i = 1;i <= row;i++)
    {
        for(j = 1,ch = 'A';j <= i;j++,ch++)
        {
            printf("%c\t",ch);
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