#include<stdio.h>

void demo()
{
    static int a=10;

    a++;

    printf("%d\n",a);
}
int main()
{
    demo();
    demo();
    demo();
    return 0;
}