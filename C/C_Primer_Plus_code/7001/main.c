/*编写一个程序。该程序读取输入直到遇到#字符，然后报告读取的空格数目、读取的换行符数目以及读取的所有其他字符数目。
 * 空格、换行、其他
 * 是一次性输入？还是循环输入？
 * 研究一下scanf与getchar有什么区别？
*/
#include <stdio.h>

int main()
{
    int sp=0, hr=0, ot=0;
    char ch;
    printf("可输入多行包含空格、换行、以及其他的字符，输入#统计结果并结束：");
    while((ch = getchar()) != '#')//scanf("%c" , &ch)
    {
        if(ch == ' ')
            sp++;
        else if(ch == '\n')
            hr++;
        else
            ot++;

    }
    printf("你输入的字符里面，空格有%d个，换行有%d个，其他有%d个\n", sp, hr, ot);
    return 0;
}
