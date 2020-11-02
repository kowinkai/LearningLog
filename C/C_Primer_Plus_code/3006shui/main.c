#include <stdio.h>

int main()
{
    double fenzi = 3.0e-23;
    int kuatuo;
      printf("请输入夸脱数：");
      scanf("%d",&kuatuo);
      printf("%d夸脱数有%.24lf水分子\n", kuatuo, kuatuo*950*fenzi);
    return 0;
}
