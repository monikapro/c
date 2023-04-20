#include <stdio.h>
void print_reverse_n(int n);
int main()
{
    print_reverse_n(10);
    return 0;
}
void print_reverse_n(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        print_reverse_n(n - 1);
    }
}