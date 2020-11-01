/*之前进来就写，被绕进循环里面，头都写晕了，几个小时写不出来，后来看了一下别人写的代码，从新梳理了一下思路：
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
拆分为三个三角形
第一区(看不见的空格)：
OOOO
OOO
OO
O
第二区（顺序字母）：
    A
   AB
  ABC
 ABCD
ABCDE
去掉空格：
A
AB
ABC
ABCD
ABCDE
第三区（逆序字母）：

A
BA
CBA
DCBA
使用一个外循环控制行，平行的三个内循环j1 j2 j3分别对应一二三区*/

#include<stdio.h>
int main(void)
{
    int j1, j2, j3, i;
    char s = 'A', x;
    printf("请输入以A开头的三角塔最底层的字母（大写）：");
    for (scanf("%c", &x), x += 1-s, i = 0; i < x; putchar(10), i++)
    {
        for(j1 = i; j1 < x-1; printf(" "), j1++);
        for(s = 'A', j2 = 0; j2 <= i; printf("%c", s), s++, j2++);
        for(s -= 2, j3 = 0; j3 < i; printf("%c", s), s--, j3++);
    }
    return 0;
}
