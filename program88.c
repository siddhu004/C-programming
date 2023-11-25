#include<stdio.h>    
#include<stdlib.h> 
#include<stdbool.h>



bool search(int arr[],int ilength,int ino)
{
    int icnt = 0;
    
    for(icnt = 0;icnt < ilength;icnt++)
    {
        if(arr[icnt] == ino)
        {
            break;
        }
    }
    if(icnt == ilength)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()  
{
    int isize = 0;   
    int *ptr = NULL; 
    int icnt = 0;    
    int ivalue = 0;
    bool iret = false;

    printf("enter the elements: \n");
    scanf("%d",&isize);

    printf("enter the elements that you want to search: \n");
    scanf("%d",&ivalue);

    ptr = (int *)malloc(isize * sizeof(int));

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
 
    iret = search(ptr,isize,ivalue);

    if(iret == true)
    {
        printf("the %d is present",ivalue);
    }
    else
    {
        printf("the %d is not present",ivalue);
    }
    free(ptr);

    return 0;     
}