/*求出温度低于零度的天数的百分率
 * Enter the list of daily low temperatures 输入每天的温度值
 * Use Celsius, and enter q to quit 使用摄氏度，输入q退出
 * days total: 总天数：
 * were below freezing. 低于零度
 * No data entered! 没有输入数据
 */
#include <stdio.h>

int main()
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;
    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while(scanf ("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING)
            cold_days++;
    }
    if (all_days != 0)
        printf("%d days total: %.1f%% were below freezing.\n", all_days, 100.0*(float)cold_days / all_days);
    if (all_days == 0)
        printf("No data entered!\n");
    return 0;
}
