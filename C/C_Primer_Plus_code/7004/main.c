/* 利用if else语句编写程序读取输入，直到#。用一个感叹号代替每个句号，将原有的每个感叹号用两个感叹号代替，最后报告进行了多少次替代。
 * if else读入直到#结束
 * 句号被感叹号替换
 * 原感叹号先替换成两个感叹号
 * 计算替换执行次数
 */
#include <stdio.h>

int main()
{
    int n=0;
    char ch;
    printf("请输入包括!与.的一段文字（输入#退出）：");
    while((ch = getchar()) != '#')
    {
            if(ch == '!')
            {
                printf("%c%c", ch, ch);
                n++;
            }
            else if(ch == '.')
            {
                putchar('!');
                n++;
            }
            else
                putchar(ch);
    }
    printf("已替换%d次！\n", n);
    return 0;
}
