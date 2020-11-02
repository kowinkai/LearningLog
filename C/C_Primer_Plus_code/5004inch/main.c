#include <stdio.h>
#define FI_ZH 12
#define IC_ZH 0.393

int main()
{
    int cm = 1;
    double inch;
    int feet;
    while(cm > 0)
    {
        printf("请输入厘米值：");
        scanf("%d", &cm);
        feet = cm*IC_ZH / FI_ZH;
        inch = cm*IC_ZH-feet*FI_ZH;
        printf("%d厘米等于%d feet,%.1f inches.\n", cm, feet, inch);
    }
    return 0;
}
