//自己写的代码不明白几个点，第一double怎么识别的字母，第二怎么同时传两个值进Temperatures函数，第三字母退出想不到要怎么表达。
//以下是网上抄的第六版题解，与第五版的问题上有点不一样。
#include <stdio.h>
//#include <stdlib.h>

void Temperatures(double tem)
{
    const double w0 = 5.0 / 9.0, w1 = 32.0;
    double k = 273.16;
    printf("%.2lf\n", tem);
    printf("%.2lf\n", w0 * (tem -w1));
    printf("%.2lf\n", k + w0 * (tem -w1));
}

int main()
{
    double tem;
    printf("input tem:");
    while(scanf("%lf", &tem) == 1)
    {
        printf("tem f=%lf,tem c=%f\n", tem, tem);
        Temperatures(tem);
        printf("input again:");
    }
    return 0;
}
