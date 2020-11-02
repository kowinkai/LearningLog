#include <stdio.h>

int main(void)
{
    int f = 4;
    int g = 5;
    float h = 5.0f;
    printf("%d\n", f, g);       //参数太多
    printf("%d %d\n", f);       //参数太少
    printf("%d %f\n",  h, g);   //参数类型不正确
    return 0;
}
