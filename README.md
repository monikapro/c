#My C Questions <br/>
##1.Swapping using Third Variable
<div style="background:black;">

```c
#include<stdio.h>

int main()
{
    int a,b,x;
    printf("enter the value of a:");

    scanf("%d",&a);
    printf("enter the value of b:");

    scanf("%d",&b);
    x=a;
    a=b;
    b=x;

    printf("after swap a=%d\n b=%d",a,b);


    return 0;
}

```
</div>
