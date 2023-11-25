
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char fname[30];

    printf("enter the file name that you wnat to create: \n");
    scanf("%s",fname);


    fd = creat(fname, 0777);

    if(fd == -1)
    {
        printf("unable to create the file \n");
        return -1;
    }
    else
    {
        printf("file is successfully created\n");
    }
    return 0;
}