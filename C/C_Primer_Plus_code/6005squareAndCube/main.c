#include <stdio.h>

int main()
{
    int star,end;
    printf("请输入要计算的起始数字与结束数字(用空格间隔）：");
    scanf("%d %d", &star, &end);
    printf("数值\t平方\t立方\t\n");
    for(int i = star; i <= end; i ++)
    {
        printf("%d\t%d\t%d\t\n", i, i*i, i*i*i);
    }
    return 0;
}
