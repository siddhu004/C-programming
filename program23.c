
#include<stdio.h>

void displayfactors(int ino)
{
    int icnt = 0;
    for(icnt = 1;icnt < ino;icnt++)   // O(N)
    {
        if((ino % icnt) == 0)
        {
            printf("%d\n",icnt);
        }
    }
}

int main()
{
    int ivalue = 0;

    printf("\n enter the number : ");
    scanf("%d",&ivalue);

    displayfactors(ivalue);
    return 0;
}

// time complexity : O(N)
// where N is the input (Natural number)


//           for(icnt = 1;icnt <= n;icnt++)
