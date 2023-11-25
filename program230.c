#include<stdio.h>

int sumR(int ino)
{
    int idigit = 0;
    static int sum = 0;
    if(ino != 0)
    {
        idigit = ino%10;
        sum = sum + idigit;
        ino = ino / 10;
        sumR(ino);
    }
    return sum;
}

int main()
{
    int ivalue = 0;
    int result = 0;

    printf("enter a number: ");
    scanf("%d",&ivalue);
    
    result = sumR(ivalue);
    printf("Additiom is : %d\n",result);

    printf("end of main\n");
    
    return 0;
}