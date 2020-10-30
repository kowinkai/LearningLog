#include <stdio.h>

int main()
{
    float inch;
    printf("请输入身高（英寸）：");
    scanf("%f",&inch);
    printf("您的身高为：%.2f英寸，%.2fcm\n", inch, inch*2.54);
    return 0;
}
