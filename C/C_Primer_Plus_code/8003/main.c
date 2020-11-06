/* 编写一个程序，把输入作为字符流读取，直至遇到EOF。
 * 令其报告输入中的大写字母个数和小写字母个数。
 * 假设小写字母的数值是连续的，大写字母也是如此。
 * 或者你可以使用ctypc.h库中的合适的函数来区分大小写。
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() //这是什么鬼？ 假设小写字母的数值是连续的，大写字母也是如此。
{
    int upper=0, lower=0, other=0;
    char ch;

    FILE * fp;
    fp = fopen("d:\\123.txt","r");
    if( fp == NULL)
    {
        printf("打开文件错误！\n");
        exit(1);
    }

    while((ch = getc(fp)) != EOF)
    {
        /*if(ch>=65 && ch<=90) //题目要求用ctypc.h
            upper++;
        if(ch>=97 && ch<122)
            lower++;*/
        if(isupper(ch))
            upper++;
        else if(islower(ch))
            lower++;
        else
            other++;
    }
    printf("读取的该字符流大写字母=%d，小写字母=%d,其他=%d,总共=%d\n", upper, lower, other, upper+lower+other);

    return 0;
}
