#include<stdio.h>
extern int i;
extern int j;
extern int arr[4];
void gun();

int main()
{
    printf("value of i is %d",i);
    printf("value of j is %d",j);

    j=51;
    printf("value of j is %d",j);
    printf("value from array %d",arr[0]);

    fun();
    gun();

    return 0;
}
int i=21;
void gun()
{
    printf("inside gun");
}