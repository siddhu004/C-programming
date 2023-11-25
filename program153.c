#include<stdio.h>



int main()
{
    int icnt = 0;
    printf("ASCII Table \n");

    for(icnt = 0;icnt <= 127;icnt++)
    {
        printf("%c\t%d\n",icnt,icnt);
    }
    return 0;
}