#include <stdio.h>

int main(void)
{
    float f;
    long double d;
    printf("请输入一个float小数，测试溢出值\n");
    scanf("%f",&f);
    printf("请输入一个double小数，测试溢出值\n");
    scanf("%lf",&d);
    printf("float=%f;double=%.10f\n", f, d);
    return 0;
}
