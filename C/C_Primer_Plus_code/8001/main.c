//设计一个程序，统计从输入到文件结尾为止的字符数。
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    int count = 0;
    FILE * fp;
    fp = fopen("d:\\123.txt", "rb");

    if(fp == NULL)
    {
        printf("打开文件失败，请检查原因\n");
        exit(1);
    }

    while((ch = getc(fp)) != EOF)
    {
        //putchar(ch);
        count++;
    }
    printf("字符数：%d\n", count);

    fclose(fp);
    return 0;
}
