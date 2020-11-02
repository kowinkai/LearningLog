#include <stdio.h>

int main()
{
    int x;
    printf("请输入一个整数：");
    scanf("%d", &x);
    int i = x;
    while(i <= x + 10)
    {
      printf("%d\t", i);
      i++;
    }
    return 0;
}
