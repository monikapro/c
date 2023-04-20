#include <stdio.h>
void print_rodd_n(int n);
int main()
{
    print_rodd_n(13);
    return 0;
}
void print_rodd_n(int n)
{
    if (n > 0)
    {
       printf("\n");
        printf("%d", 2 * n - 1);
          print_rodd_n(n - 1);
       
    }
}