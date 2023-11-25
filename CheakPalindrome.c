
/*
 name :- kardile siddharth satish
 code :- break the number and cheak the number
         is palindrome or not in the program
 input :- taking input form user
*/

#include<stdio.h>
#include<stdbool.h>

bool cheakpalindrome(int ino)
{
    int idigit = 0;
    int ireverse = 0;
    int itemp = ino;


    while (ino != 0)
    {
        idigit = ino % 10;
        ireverse = (ireverse * 10)+idigit;
        ino = ino / 10;
    }
    if(ireverse == itemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int ivalue = 0;
    bool iret = 0;

    printf("enter number : \n");
    scanf("%d",&ivalue);

    iret = cheakpalindrome(ivalue);
    if(iret == true)
    {
        printf("%d is a palindrome number",ivalue);
    }
    else
    {
        
        printf("%d is not palindrome number",ivalue);
    }

    return 0;
}