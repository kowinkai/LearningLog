/* 编写一个程序，把输入作为字符流读取，直到遇到EOF。令该程序打印每个输入字符及其ASCII编码的十进制值。
 * 注意在ASCII序列中空格字符前面的字符是非打印字符，要特殊处理这些字符。
 * 如果非打印字符是换行符或制表符，则分别打印\n或\t。否则，使用控制字符符号。
 * 例如，ASCII的l是Ctrl+A，可以显示为AA。注意A的ASCⅡ值是Ctrl+A的值加64。
 * 对其他非打印字符也保持相似的关系。除去每次遇到一个换行符时就开始一个新行之外，每行打印10对值。
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE * fp;
    fp = fopen("d:\\123.txt","r");
    if(fp == NULL)
    {
        printf("打开文件失败！\n");
        exit(1);
    }
    int count = 0;
    while((ch = getc(fp)) != EOF)
    {
        if  (ch == '\n')
        {
            printf("\\n=%d\n", ch, ch);
            count = 0;
        }
        else if(ch == '\t')
            printf("\\t=%d\t", ch);
        else if (ch < 32)
            printf("%c%c=%d\t", ch+64, ch+64, ch);
        else
            printf("%c=%d\t", ch, ch);
        count++;
        if(count == 10)
        {
            putchar(10);
            count = 0;
        }
    }


    return 0;
}
