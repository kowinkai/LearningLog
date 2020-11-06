/* 编写一个程序，显示一个菜单，为您提供加法、减法、乘法或除法的选项。
 * 获得您的选择后，该程序请求两个数，然后执行您选择的操作。
 * 该程序应该只接受它所提供的菜单选项。
 * 它应该使用float类型的数，并且如果用户未能输入数字应允许其重新输入。
 * 在除法的情况中，如果用户输入0作为第二个数，该程序应该提示用户输入一个新的值。
 * 一个典型的程序运行应该如下所示：
 * Enter the operation of your choice:
 * a. add        s. subtract
 * m. multiply   d. divide
 * q. quic
 *
 */
#include <stdio.h>

int main()
{
    float a=0, b=0, res=0;
    char ch=0;

    while(ch != 'q')
    {
        printf("请使用C简易计算器:\n");
        printf("a. 加法        s.减法\n");
        printf("m. 乘法        d.除法\n");
        printf("q. 退出\n");
        ch = getchar();
        if(ch == 'a'|| ch == 's' ||ch == 'm' || ch == 'd');
        else
            continue;
        if(ch == '\n')
            getchar();
        printf("请输入第一个数的值:");
        while(scanf("%f", &a) != 1)
        {
            while(getchar() != '\n')
                printf("输入有误！请输入第一个数的值:");
        }
        printf("请输入第二个数的值：");
        while(scanf("%f", &b) != 1)
        {
            while(getchar() != '\n')
                printf("输入有误！请输入第二个数的值:");
        }
        printf("ch=%c\n",ch);
        do
        {
            if(ch == 'd' && b == 0)
            {
                printf("不能用零去除，请重输入:");
                scanf("%f", &b);
                while(getchar() != '\n');
            }
            else
                break;
        }while(1);
        switch (ch)
        {
        case 'a':res=a+b;
            break;
        case 's':res=a-b;
            break;
        case 'm':res=a*b;
            break;
        case 'd':res=a/b;
            break;
        }
        printf("计算结果：%.2f\n\n", res);
        getchar();
        res = 0;
    }
    return 0;
}

