#include<stdio.h>
int sum_n(int n);
int main()
{
    int k,x;
printf("enter the number");
scanf("%d",&x);
k=sum_n(x);
printf("%d",k);
}
int sum_n(int n)
{
if(n==1)
return 1;

return n+sum_n(n-1);
printf("\n");
}


