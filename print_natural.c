#include <stdio.h>
void print_n(int n);
int main()
{
    print_n(10);
    return 0;
}
void print_n(int n)
{
    if (n > 0)
    {
        print_n(n - 1);
        printf("%d", n);
    
    }
}