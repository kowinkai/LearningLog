#include <stdio.h>
#define MTKM  1.609

int main()
{
    const float JLTS = 3.785;
    float mai, jialun;
    printf("请输入英里数与消耗加仑：");
    scanf("%f %f", &mai, &jialun);
    float onemai = jialun / mai*JLTS;
    printf("每百公里油耗为：%0.1f升\n",onemai*MTKM*100);
    printf("每公里油耗为：%0.1f升\n", onemai*MTKM);
    return 0;
}
