

#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char filename[50];
    printf("enter the file that you want to delete \n");
    scanf("%s",filename);

    remove(filename);
    return 0;
}