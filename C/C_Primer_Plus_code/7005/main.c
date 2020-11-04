/* 用switch重做练习3
 * 编写一个程序。该程序读取整数，直到输入0。输入终止后，程序应该报告输入的偶数（不包括0）总个数、偶数的平均值，输入的奇数总个数以及奇数的平均值。
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
        //        if(integer%2 == 0)
        //        {
        //            even++;
        //            even_sum += integer;
        //        }
        //        else
        //        {
        //            odd++;
        //            odd_sum += integer;
        //        }

        switch (integer%2)
        {
        case  0:
            even++;
            even_sum += integer;
            break;
        case 1:
            odd++;
            odd_sum += integer;
        }
        printf("偶数次数=%d，偶数求和=%d，奇数次数=%d，奇数求和=%d\n", even, even_sum, odd, odd_sum);

    }
    printf("Done!\n");
    return 0;
}
