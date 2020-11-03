/* 使用嵌套if显示一个数的约数
 * 质数、素数、约数、合数、因数有什么区别?
 * 质数,也称素数,即只能被1和它本身整除的正整数.如2,3,5,7等,2是唯一的偶数质数.
 * 合数与之相反,除1和它本身之外,至少还有1个数能够整除它.如4,9,12等.
 * 如果一个数能整除另一个数,则这个数称为另一个数的约数,也可以说是它的因数.
 * 上述概念,一般是在正整数范围内研究.
 * Please enter an integer for analysis 请输入整数进行分析
 * divisible 可除尽的
 * prime 素数
*/
#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned long num;
    unsigned long div;
    bool isPrime;

    printf("Please enter an integer for analysis;");
    printf("Enter q to quit. \n");
    while(scanf("%lu", &num) == 1)
    {
        for(div = 2, isPrime=true; (div*div) <= num; div++)
        {
            if(num % div == 0)
            {
                if((div * div) != num)
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                else
                    printf("%lu is divisible by %lu...\n", num, div);
                isPrime = false;

            }
        }
        if(isPrime)
                printf("%lu is prime.\n", num);
        printf("Please enter another integer for analysis;");
        printf("Enter q to quit.\n");
    }
    printf("Bye.\n");
    return 0;
}
