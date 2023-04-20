#include <stdio.h>
void print_even_n(int n);
int main()
{
    print_even_n(60);
    return 0;
}
void print_even_n(int n)
{
    if (n > 0)
    {
        print_even_n(n - 1);
        printf("%d", 2 * n);
        printf("\n");
    }
}