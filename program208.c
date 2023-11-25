
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char fname[30];
    int iret = 0;
    int ch = 0;

    char arr[]="abcdefghijklmnopqrstuvwxyz";

    printf("enter the file name that you wnat to open: \n");
    scanf("%s",fname);

    printf("enter the size of array that you want to write in the file: \n");
    scanf("%d",&ch);



    fd = open(fname, O_RDWR);

    if(fd == -1)
    {
        printf("unable to open the file \n");
        return -1;
    }

    iret = write(fd,arr,ch);

    printf("%d bytes gets successfully written in the file: \n",iret);
    close(fd);
    
    return 0;
}