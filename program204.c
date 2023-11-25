
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    fd = open("program14.c", O_RDONLY);

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