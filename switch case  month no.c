#include<stdio.h>

int main()
{
    int x;
    printf("enter the month no");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:

        printf("31days");
        break;
    case 2:
        printf("28or29days");
        break;
        case 4:
        case 6:
        case 9 :
        case 11 :
        printf("30days");
        break;
        default:
        printf("invalid month");

    }

    return 0;
}