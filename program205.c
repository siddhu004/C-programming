
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char fname[30];

    printf("enter the file name that you wnat to open: \n");
    scanf("%s",fname);


    fd = open(fname, O_RDONLY);

    if(fd == -1)
    {
        printf("unable to open the file \n");
        return -1;
    }
    else
    {
        printf("file is successfully opened with FD %d\n",fd);
    }

    close(fd);

    return 0;
}