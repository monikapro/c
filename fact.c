#include <stdio.h>
int fact(int);
int main()
{
    int x, i;

    printf("enter the number:");
    scanf("%d", &x);
    i = fact(x);
    printf("%d\n", i);
    return 0;
}

int fact(int n)
{
    int f = 1;
    while (n)
    {
        f = f * n;
        n--;
    }
    return f;
}