#include <stdio.h>

int main()
{
    char c;
    printf("请输入一个ASCII码：");
    scanf("%d",&c);
    printf("你输入的ASCII码对应的是：%c\n", c);
    for(c=33;c<126;c++)
    {
      printf("%3d=%c\t", c, c);
    }
    return 0;
}
