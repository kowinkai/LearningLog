#include <stdio.h>

int main()
{
    float shengao;
    char name[10];
    printf("请分别输入您的姓名与身高（英寸）:");
    scanf("%s %f", name, &shengao);
    printf("%s, you are %0.3f feet tall\n", name, shengao/12);
    return 0;
}
