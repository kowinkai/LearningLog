/* 编写程序，要求输入一周中的工作小时数，然后打印工资总额、税金以及净工资。作如下假设：
 * a．基本工资等级=10.00美元/小时
 * b．加班（超过40小时）=1.5倍的时间
 * c．税率       前300美元为15%
 *              下一个150美元为20%
 *              余下的为25%
 * 用#define定义常量，不必关心本例是否符合当前的税法。
 */
#include <stdio.h>
#define HOUR 10.0
#define WORK_OV 1.5
#define TAXES_300 0.15
#define N_TAXES_150 0.2
#define TAXES_OT 0.25

int main()
{
    int work_h;
    float taxes, wage_total;
    printf("请输入本週工作小时：");
    scanf("%d", &work_h);
    if(work_h <= 40)
        wage_total = work_h * HOUR;
    else
        wage_total = 40 * HOUR + (work_h - 40) * WORK_OV;

    if(wage_total <= 300)
        taxes = wage_total * TAXES_300;
    else if(wage_total <= 450)
        taxes = 300 * TAXES_300 + (wage_total - 300) * N_TAXES_150;
    else //if(wage_total > 450)
        taxes = 300 * TAXES_300 + 150 * N_TAXES_150 + (wage_total - 450) * TAXES_OT;
    printf("工资总额：%5.2f\n税    金：%5.2f\n净 工 资：%5.2f\n", wage_total, taxes, wage_total - taxes);
    return 0;
}
