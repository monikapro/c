#include <stdio.h>
int sum_odd(int n);
int main()
{
    int k, x;
    printf("enter the number");
    scanf("%d", &x);

    k = sum_odd(x);

    printf("%d", k);
    printf("\n");
}
int sum_odd(int n)
{
    if (n == 1)
        return 1;

    return (2 * n - 1) + sum_odd(n - 1);
}
