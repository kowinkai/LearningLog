/* 1988年United States Federal Tax Schedule是近期最基本的。它分为4类，每类有两个等级。下面是其摘要；美元数为应征税的收入。

种类	                税金
单身	            前17850美元按15%，超出部分按28%
户主	            前23900美元按15%，超出部分按28%
已婚，共有	    前29750美元按15%，超出部分按28%
已婚，离异	    前14875美元按l5%，超出部分按28%

例如，有20000美元应征税收入的单身雇佣劳动者应缴税金0.15×17 850美元+0.28×（20 000美元-17 850美元）。
编写一个程序，让用户指定税金种类和应征税收入，然后计算税金。使用循环以便用户可以多次输入。

输入收入
4种类型的交税选择
计算税金，打印收入、税金、税后收入
 */

#include <stdio.h>
#define FIRST_TAX 0.15
#define TAIL_TAX 0.28

int main()
{
    double income=0, taxes=0, discount=0 ;
    char choice;
    while(income >= 0)
    {
        printf("1.单身        2.户主        \n3.已婚        4.离异\n");
        printf("请选择报税类型：");
        choice = getchar();
        getchar();                      //这里有个坑，两个getchar或scanf之间需要getchar吃掉一个回车
        switch (choice)
        {
        case '1':
            discount = 17850;
            break;
        case '2':
            discount = 23900;
            break;
        case '3':
            discount = 29750;
            break;
        case '4':
            discount = 14875;
        }
        printf("请输入收入（输入负值退出）:");
        scanf("%lf", &income);
        if(income>discount)
            taxes = discount * FIRST_TAX + ((income - discount)*TAIL_TAX);
        else
            taxes = income * FIRST_TAX;
        printf("收入=%.2lf,应缴税金=%.2lf,税后收入=%.2lf\n\n", income, taxes, income - taxes);
        getchar();                      //这里有个坑，循环首还有个getchar
    }
    return 0;
}
