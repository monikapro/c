#include<stdio.h>
void odd_natural_no(int);
int main()
{
int x=25;
odd_natural_no(x);
return 0;
}
void odd_natural_no(int n)
{
    int i;
for(i=1;i<=n;i++)
printf("%d ",2*i-1);



}


