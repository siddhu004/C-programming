#include<stdio.h>    //Io
#include<stdlib.h>   // memory management

float average(int arr[],int ilength)
{
    // step 5    perform the operations
    int icnt = 0;
    int isum = 0;
    
    for(icnt = 0;icnt < ilength;icnt++)
    {
        isum = isum + arr[icnt];
    }
    return ((float)isum / (float)ilength);
}

int main()           // entry point function
{
    int isize = 0;   // to store sizze of array
    int *ptr = NULL; //to store address of array
    int icnt = 0;    // loop counter
    float fret = 0.0f;

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
 // step 4   pass the array to the function
    fret = average(ptr,isize);
    printf("count is : %f",fret);
 // step 6   deallocate the memory of array
    free(ptr);

    return 0;      // return success to os
}