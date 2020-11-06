/* 修改第7章的练习8，使菜单选项由字符代替数字进行标记。
 * Enter the number corresponding to the desired pay rate or action:
 * 1． $8.75/hr ?????? 2． $9.33/hr
 * 3． $lO.OO/hr ????? 4． $11.20/hr
 * 5． quit
 */
#include <stdio.h>
#define WORK_OV 1.5
#define TAXES_300 0.15
#define N_TAXES_150 0.2
#define TAXES_OT 0.25

int main()
{
    int work_h;
    char amount;
    float taxes = 0.0, wage_total = 0.0, hour = 10.0;
    printf("a．$8.75/hr         b．$9.33/hr\nc．$lO.OO/hr        d．$11.20/hr\n5．quit\n\b\b");
    printf("Enter the number corresponding to the desired pay rate or action:");
    amount = getchar();
    switch(amount)
    {
    case 'a':
        hour = 8.75;
        break;

    case 'b':
        hour = 9.33;
        break;
    case 'c':
        hour = 10.0;
        break;
    case 'd':
        hour = 11.2;
        break;
    case '5':
        goto end;
    }
    printf("请输入本週工作小时：");
    scanf("%d", &work_h);
    if(work_h <= 40)
        wage_total = work_h * hour;
    else
        wage_total = 40 * hour + (work_h - 40) * WORK_OV;

    if(wage_total <= 300)
        taxes = wage_total * TAXES_300;
    else if(wage_total <= 450)
        taxes = 300 * TAXES_300 + (wage_total - 300) * N_TAXES_150;
    else //if(wage_total > 450)
        taxes = 300 * TAXES_300 + 150 * N_TAXES_150 + (wage_total - 450) * TAXES_OT;
end: printf("工资总额：%5.2f\n税    金：%5.2f\n净 工 资：%5.2f\n", wage_total, taxes, wage_total - taxes);
    return 0;
}
