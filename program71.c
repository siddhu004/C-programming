#include<stdio.h>
#include<stdlib.h>

int main()
{
    int isize = 0;
    int *ptr = NULL;
    
    printf("enter the number of elements: \n");
    scanf("%d",&isize);

    ptr = (int*)malloc(isize*sizeof(int));
    
    if(ptr == NULL)
    {
        printf("unable to allocate memory \n");
        return -1;
    }
    printf("memory allocated succesfully...\n");
    
    return 0;
}