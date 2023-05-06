#include<stdio.h>
int main()
{
    int ch=0;
    printf("enter month number: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("januwary");
        break;

         case 2:
        printf("februwary");
        break;

         case 3:
        printf("march");
        break;

         case 4:
        printf("april");
        break;

         case 5:
        printf("may");
        break;

         case 6:
        printf("june");
        break;

         case 7:
        printf("jully");
        break;

         case 8:
        printf("aguast");
        break;

         case 9:
        printf("september");
        break;

         case 10:
        printf("october");
        break;

         case 11:
        printf("november");
        break;

         case 12:
        printf("december");
        break;

        default: printf("enter valid month number");
    }

    return 0;

}