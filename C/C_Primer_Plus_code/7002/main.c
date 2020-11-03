/* 编写一个程序，该程序读取输入直到遇到#字符。使程序打印每个输入的字符以及它的十进制ASCII码。每行打印8个字符/编码对。
 * 建议：利用字符计数和模运算符(%)在每8个循环周期时打印一个换行符。
 * 思考一下长按换行显示出来的10是什么原因？
 */
#include <stdio.h>

int main()
{
    char ch;
    int count = 0;
    while((ch = getchar()) != '#')
    {
        printf("%c/%03d   ", ch, ch);
        count++;
        if(count % 8 == 0)
            putchar(10);
    }

    return 0;
}
