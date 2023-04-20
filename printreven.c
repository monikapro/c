#include <stdio.h>
void print_reven_n(int n);
int main()
{
    print_reven_n(50);
    return 0;
}
void print_reven_n(int n)
{
    if (n > 0)
       
    {
        printf("\n");
        printf("%d", 2 * n);
        print_reven_n(n - 1);

    }
}