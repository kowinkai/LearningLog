/* 编写一个程序。该程序读取整数，直到输入0。输入终止后，程序应该报告输入的偶数（不包括0）总个数、偶数的平均值，输入的奇数总个数以及奇数的平均值。
 * 输入整数，输入0退出
 * 偶数计次
 * 奇数计次
 * 偶数累计求和
 * 奇数累计求和
 *
 * 刚开始用getchar（）做数值入口遇到了一个问题，计算的是输入单个字符的ASCII码值的计算
 * 研究一个问题，为什么scanf输入与之格式不等的值会造成死循环？
 */
#include <stdio.h>

int main()
{
    int integer = 1 ;
    int odd=0, odd_sum=0, even=0, even_sum=0;
    printf("请输入多个整数，输入0程序结束：");
    while(integer != 0)
    {
        scanf("%d", &integer);
        if(integer%2 == 0)
        {
            even++;
            even_sum += integer;
        }
        else
        {
            odd++;
            odd_sum += integer;
        }
        printf("偶数次数=%d，偶数求和=%d，奇数次数=%d，奇数求和=%d\n", even, even_sum, odd, odd_sum);
    }
    printf("Done!\n");
    return 0;
}
