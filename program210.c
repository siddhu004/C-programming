
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char fname[30];
    int iret = 0;

    char arr[50];

    printf("enter the file name that you wnat to open: \n");
    scanf("%s",fname);

    printf("enter the data that you want to write in the file: \n");
    scanf(" %[^'\n]s",arr);

    fd = open(fname, O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("unable to open the file \n");
        return -1;
    }

    iret = write(fd,arr,strlen(arr));

    printf("%d bytes gets successfully written in the file: \n",iret);
    close(fd);
    
    return 0;
}