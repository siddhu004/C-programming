#include<stdio.h>

int sumI(int ino)
{
    int idigit = 0;
    int sum = 0;
    while(ino != 0)
    {
        idigit = ino%10;
        sum = sum + idigit;
        ino = ino / 10;
    }
    return sum;
}

int main()
{
    int ivalue = 0;
    int result = 0;

    printf("enter a number: ");
    scanf("%d",&ivalue);
    
    result = sumI(ivalue);
    printf("Additiom is : %d\n",result);

    printf("end of main\n");
    
    return 0;
}