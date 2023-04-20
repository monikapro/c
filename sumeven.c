#include <stdio.h>
int sum_even(int n);
int main()
{
    int k, x;
    printf("enter the number");
    scanf("%d", &x);

    k = sum_even(x);

    printf("%d", k);
    printf("\n");
}
int sum_even(int n)
{
    if (n == 1)
        return 1;
    return (2 * n) + sum_even(n - 1);
}