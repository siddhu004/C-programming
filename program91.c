#include<stdio.h>    
#include<stdlib.h>   

int searchfirst(int arr[],int ilength,int ino)
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
        return -1;
    }
    else
    {
        return icnt;
    }
}

int main()  
{
    int isize = 0;   
    int *ptr = NULL; 
    int icnt = 0;    
    int iret = 0;
    int ivalue = 0;
    
    printf("enter the elements: \n");
    scanf("%d",&isize);
     
    printf("enter the elements to be search: \n");
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
    
    iret = searchfirst(ptr,isize,ivalue);
    
    if(iret == -1)
    {
        printf("\nthere is no such element: \n");
    }
    else
    {
        printf("\n%d occured at index %d\n",ivalue,iret);
    }
    free(ptr);

    return 0;     
}