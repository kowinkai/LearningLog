/* 使用continue跳过部分循环
 * Enter the first score(q to quit): 输入第一个分数（q表示退出）：
 * %0.1f is an invalid value. Try again: %0.1f是无效值。再试一次：
 * Enter next score 输入下一个分数
 * No valid scores were entered. 未输入有效分数。
 */
#include <stdio.h>

int main()
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Enter the first score(q to quit):");
    while (scanf("%f", &score) == 1)                    //continue执行后又从新的循环开始
    {
        if(score < MIN || score > MAX)
        {
            printf("%0.1f is an invalid value. Try again:", score);
            continue;
        }
        printf("Accepting %0.1f: \n", score);
        min = (score < min) ? score: min;
        max = (score > max) ? score: max;
        total += score;
        n++;
        printf("Enter next score (q to quit):");
    }
    if(n > 0)
    {
        printf("Average of %d scores is %0.1f.\n", n, total / n);
        printf("Low = %0.1f, high = %0.1f\n", min, max);
    }
    else
        printf("No valid scores were entered.\n");
    return 0;
}
