#include <stdio.h>

int main()
{
    int a[10];
    for(int i=0; i < 8; scanf("%d", &a[i]), i++)
        printf("请输入第%d个整数：", i+1);
    for(int i=7; i >= 0; printf("%d ",a[i]), i--);
    return 0;
}
