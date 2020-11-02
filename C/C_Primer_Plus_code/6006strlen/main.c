#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char s[40];
    printf("请输入一个字符串：");
    scanf("%s", s);
    i = strlen(s);
    printf("字符数=%d\n", i);
    for(i--; i >= 0; i--)       //第一个i--是数组元素从0开始末位减1
    {
        printf("%c", s[i]);
    }
    putchar(10);
    return 0;
}
