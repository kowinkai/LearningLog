#include <stdio.h>
#define zhou 7

int main()
{
    int day = 0, days = 1, week;
    while(days>0)
    {
        printf("请输入天数用于计算週与天：");
        scanf("%d", &days);
        week = days / zhou;
        day = days % zhou;
        printf("%d days are %d weeks, %d days.\n", days, week, day);
    }
    return 0;
}
