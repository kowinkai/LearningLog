#include <stdio.h>

int main()
{
    double d;
    printf("请输入一个小数：");
    scanf("%lf",&d);
    printf("小数格式=%lf;指数格式=%le", d, d);
    return 0;
}
