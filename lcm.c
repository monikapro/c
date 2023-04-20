#include <stdio.h>
int lcm(int, int);
int main()
{
    int k, x, y;
    printf("enter two numbers");
    scanf("%d %d", &x, &y);
    k = lcm(x, y);
    printf("lcm is %d", k);
    return 0;
}
int lcm(int a, int b)
{
    int i;
    for (i= a > b ? a : b; i<= a * b; i++)
        if (i% a == 0 && i% b == 0)
            return i;
return 0;

}