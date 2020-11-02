#include <stdio.h>

int main()
{
    float inch ;
    float CM = 2.54;
    printf("请输入需要转换的英寸值：");
    scanf("%f",&inch);
    printf("%.2f英寸等于%.2fCM\n",inch,inch*CM);
    return 0;
}
