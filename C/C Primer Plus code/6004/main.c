#include<stdio.h>
/*
之前进来就写，被绕进循环里面，头都写晕了，几个小时写不出来，后来看了一下别人写的代码，从新梳理了一下思路：

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

使用一个外循环控制行，平行的三个内循环分别对应一二三区
*/

int main()
{
    int i;
    int j1, j2, j3;     //j1管空格，j2管顺序字母，j3管逆序字母
    char s = 'A';
    printf("请输入以A开头的三角塔最底层的字母（大写）：");
    char x;
    scanf("%c", &x);
    x = x - s + 1;      //x为计算以A开头到输入的字母需要多少行
    printf("x=%d行\n", x);
    for (i = 0; i < x; i++)
    {
        for(j1 = i; j1 < x-1; j1++)
        {
            printf(" ");
        }
        s = 'A';
        for(j2 = 0; j2 <= i; j2++)
        {
            printf("%c", s);
            s++;
        }
        s -= 2;         //原本就要减1，在j2循环最后还加了1，所以j3循环前减2
        for(j3 = 0; j3 < i; j3++)
        {
            printf("%c", s);
            s--;
        }
        printf("\n");
    }
    return 0;
}

