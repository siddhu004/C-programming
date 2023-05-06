#include<stdio.h>


int main()
{
    int rate=0;

    printf("give rating..");
    scanf("%d",&rate);

    switch(rate)
    {
        case 1:
           printf("nice quality");
           break;

           case 2:
              printf("good quality");
              break;

              case 3:
                printf("very good quality");
                break;

                case 4:
                  printf("delicious qualilty");
                  break;
                
                  case 5:
                  printf("best quality ever n ever");
                  break;

                  default:
                  printf("i'll do it later");
    }
    return 0;
}