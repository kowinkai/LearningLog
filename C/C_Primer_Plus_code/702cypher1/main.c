//改变输入，只保留其中的空格
#include <stdio.h>
#define SPACE ' '

int main()
{
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
        ch = getchar();
    }
    putchar(ch);
    return 0;
}


//getchar()开始输入的一串字符是如何一个一个读取的？
