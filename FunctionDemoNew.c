#include<stdio.h>
int addition(int a,int b)
{
    int result=0;
    result=a+b;
    return result;
}
int main()
{
    int no1=10;
    int no2=11;
    int Ans=0;
    Ans=addition(no1,no2);
    printf("%d",Ans);
    return 0;
}