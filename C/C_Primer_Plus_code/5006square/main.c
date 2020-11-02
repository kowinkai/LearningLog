#include <stdio.h>

int main()
{
    int day;
    int monay = 0;
    int i = 0;
    printf("请输入需要计算的天数：");
    scanf("%d",&day);
    while(i < day)
    {
    i ++;
    monay = i * i + monay;
    }
    printf("您%d天可以赚到%d元\n",day ,monay);
    return 0;
}
