#include <stdio.h>
float cube(float x);

int main()
{
    float a;
    scanf("%f", &a);
    printf("a=%f\n", a);
    a = cube(a);
    printf("%.2f\n",a);
    return 0;
}

float cube(float x)
{
    printf("x=%f\n", x);
    x = x * x * x;
    printf("xxx=%f\n", x);
    return x;
}
