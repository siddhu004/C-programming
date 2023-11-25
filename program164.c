#include<stdio.h>

// A E I O U
// a e i o u

int strlenvowel(char *str)
{
    int icount = 0;

    while (*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            icount++;
        }
        else if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            icount++;
        }
        str++;
    }
    return icount;
}

int main()
{
    char arr[20];
    int iret = 0;

    printf("enter your name: \n");
    scanf("%[^'\n]s",arr);
     
    iret = strlenvowel(arr);

    printf("length of  vowel is : %d",iret);
    
    return 0;
}