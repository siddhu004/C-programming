

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

#define BUFFERSIZE 1024

int main()
{
    int fd = 0;
    char filename[50];
    int icnt = 0;
    int icount = 0;
    char arr[BUFFERSIZE];
    int iret = 0;

    printf("enter the file that you want to delete \n");
    scanf("%s", filename);

    
    fd = open(filename, O_RDONLY);
    while(1)
    {
        iret = read(fd, arr, sizeof(arr));
        if(iret == 0)
        {
            break;
        }
        for(icnt = 0;icnt < iret;icnt++)
        {
            if((arr[icnt] >= 'a') && (arr[icnt] <= 'z'))
            {
                icount++;
            }
        }        
    }

    printf("number of small case letters are: %d\n",icount);

    close(fd);
    return 0;
}