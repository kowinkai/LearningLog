/* 编写一个程序读取输入，直到#，并报告序列ei出现的次数。
 * 此程序必须要记住前一个字符和当前的字符。用诸如“Receive your eieio award.”的输入测试它。
 */
#include <stdio.h>

int main()
{
    int ei_count = 0;
    char ch;
    char pre_ch='a';
    printf("请输入包含ei的一段文字（输入#退出）：");
    while((ch = getchar()) != '#')
    {
        if(ch == 'i')
            if(pre_ch == 'e')
            {
                ei_count++;
                pre_ch = 'a';
            }
        if(ch == 'e')
            pre_ch = ch;
    }
    printf("ei出现%d次。", ei_count);
    return 0;
}

