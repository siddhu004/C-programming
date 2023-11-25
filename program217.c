

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int fd = 0;
    char filename[50];
    char arr[10];
    int iret = 0;

    printf("enter the file that you want to delete \n");
    scanf("%s", filename);

    fd = open(filename, O_RDONLY);
    iret = read(fd, arr, 10);
    write(1, arr, iret);

    printf("\n");
    iret = read(fd, arr, 10);
    write(1, arr, iret);

    printf("\n");
    iret = read(fd, arr, 10);
    write(1, arr, iret);

    printf("\n");
    iret = read(fd, arr, 10);
    write(1, arr, iret);

    printf("\n");
    iret = read(fd, arr, 10);
    write(1, arr, iret);

    printf("\n");
    iret = read(fd, arr, 10);
    write(1, arr, iret);

    printf("\n");
    iret = read(fd, arr, 10);
    write(1, arr, iret);

    printf("\n");
    iret = read(fd, arr, 10);
    write(1, arr, iret);

    printf("\n");
    iret = read(fd, arr, 10);
    write(1, arr, iret);

    printf("\n");
    iret = read(fd, arr, 10);
    write(1, arr, iret);

    close(fd);
    return 0;
}