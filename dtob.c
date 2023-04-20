#include <stdio.h>
void dtob(int n);
int main()
{
    dtob(25);
    return 0;
}
void dtob(int n)
{
    if (n > 0)
    {

        dtob(n / 2);

        printf("%d", n % 2);
        printf("\n");
    }
}