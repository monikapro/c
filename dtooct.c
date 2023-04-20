#include <stdio.h>
void dtob(int n);
int main()
{
    dtob(60);
    return 0;
}
void dtob(int n)
{
    if (n > 0)
    {

        dtob(n / 8);

        printf("%d", n % 8);
        printf("\n");
    }
}