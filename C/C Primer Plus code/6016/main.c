//中间几题有空再做
#include <stdio.h>

int main()
{
    int i;
    double money = 1000000;
    for(i =0; money > 100000; i++ )
    {
        money += money * 0.08;
        money -= 100000;
        printf("第%02d年年底剩余金额：%9.2lf\n", i+1, money);
    }
    printf("第%d年年底取走本金加利息=%.2lf后余额为零。\n", i+1, money+money*0.08);
    return 0;
}
