#include <stdio.h>
void printre_n(int n);
int main()
{
    printre_n(1367);
    return 0;
}
void printre_n(int n)
{
    if (n > 0)
    {
       
      printf("%d",n%10);
          printre_n(n/10);
       printf("\n");
    }
}