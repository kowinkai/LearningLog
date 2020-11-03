/* 使用逻辑与运算符
 * There are %d non-quote characters. 有%d个非引号字符。
 */
#include <stdio.h>
#define PERIOD '.'

int main()
{
    int ch;
    int charcount = 0;

    while((ch = getchar()) != PERIOD)
    {
        if(ch != '"' && ch != '\'')
            charcount++;
    }
    printf("There are %d non-quote characters.\n", charcount);
    return 0;
}
