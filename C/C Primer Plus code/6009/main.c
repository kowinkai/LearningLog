#include <stdio.h>

int main()
{
    int s, x, pfh=0;
    printf("请输入两个整数（空格隔开）：");
    scanf("%d %d", &s, &x);
    while(s < x)
    {
    for(int i = s; i <= x; pfh=pfh+i*i, i++);
    printf("您输入的是上下限的平方为：%d 与 %d 和为：%d\n", s*s, x*x, pfh);
    printf("请继续输入，上限<=下限退出：");
    scanf("%d %d", &s, &x);
    pfh = 0;
    }
    printf("Done\n");
    return 0;
}
