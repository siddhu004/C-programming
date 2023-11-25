

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int fd = 0;
    char filename[50];
    char arr[100];
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
        write(1, arr, iret);
        printf("\n");
        
    }
    close(fd);
    return 0;
}