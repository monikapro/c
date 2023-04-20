#include <stdio.h>
void print_sq(int n);
int main()
{
    print_sq(10);
    return 0;
}
void print_sq(int n)
{
    if (n > 0)
    {
        print_sq(n - 1);
        printf("%d", n * n);
        printf("\n");
    }
}