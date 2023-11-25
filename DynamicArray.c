
/*
 name :- kardile siddharth satish
 code :- take a number form user and allocate their memory
     in dynamically then accept value and display them in the program
 input :- taking input form user
*/

#include<stdio.h>    // Io
#include<stdlib.h>   // memory management


int main()           // entry point function
{
    int isize = 0;   // to store sizze of array
    int *ptr = NULL; // to store address of array
    int icnt = 0;    // loop counter

 // step 1    accept the number of elements from user
    printf("enter the elements: \n");
    scanf("%d",&isize);

 // step 2    allocate memory dynamically
    ptr = (int *)malloc(isize * sizeof(int));

 // step 3   accept value from user
    printf("enter the elements: \n");
    for(icnt = 0;icnt < isize;icnt++)
    {
        scanf("%d",&ptr[icnt]);
    }

    printf("elements of array are: \n");
    for(icnt = 0;icnt < isize;icnt++)
    {
        printf("%d\n",ptr[icnt]);
    }

    return 0;      
}