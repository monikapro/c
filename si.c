#include <stdio.h>
float interest(float,float,float);
int main()
{
    float k, x = 5000,y=6.5, z=2;
     k = interest(x,y,z);
    printf("simple interest is %f", k);
    return 0;
}

float interest(float p,float r,float t)
{
    float i;
    i=(p*r*t)/100;
    return i;
}










