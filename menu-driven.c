#include<stdio.h>

int main()
{
    int a,x,y;


    printf("\n1.addition");
    printf("\n2 subtraction");
    printf("\n3 multiplication ");
    printf("\n4 division");
    printf("\n5 exit");
    printf("\n enter the option:");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("enter the two no:");
        scanf("%d %d",&x,&y);
        printf("addition is %d",x+y);
        break;
    case 2:
        printf("enter the two no:");
        scanf("%d %d",&x,&y);
        printf("subtraction is %d",x-y);
        break;
    case 3 :
        printf("enter the two no:");
        scanf("%d %d",&x,&y);
        printf("multiplication is %d",x*y);
        break;
    case 4:
        printf("enter the two no:");
        scanf("%d %d",&x,&y);
        printf("division is %d",x/y);

    }

    return 0;
}