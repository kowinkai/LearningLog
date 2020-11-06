/* 编写一个程序，把输入作为字符流读取，直至遇到EOF。
 * 令其报告每个单词的平均字母数。不要将空白字符记为单词中的字母。
 * 实际上，标点符号也不应该计算，但现在不必考虑这一点(如果您想做得好一些，可以考虑使用ctype.h系列中的ispunct()函数）。
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    int count=0, word=0, punct=0;
    char ch;
    float a=0;

    FILE * fp;
    fp = fopen("d:\\123.txt", "r");
    if(fp == NULL)
    {
        printf("打开文件错误\n");
        exit(1);
    }

    while((ch = getc(fp)) != EOF)
    {
        if(isalpha(ch))
            word++;

        if(word>1 && (ch==' ' || ch==',' || ch=='.' || ch=='!' || ch=='\n'))//暂时就用这几种结束的符号算单词吧，1个字母不算
        {
            count++;
            a = (a+word)/2;
            word = 0;
        }

        if(ispunct(ch))
        {
            punct++;
            word = 0;
        }

        if(ch == '\n')  //这个管单词后面直接回车的情况
            word = 0;

    }
    printf("单词=%d，平均单词数=%.0f，标点符号=%d\n", count, a, punct);
    return 0;
}
