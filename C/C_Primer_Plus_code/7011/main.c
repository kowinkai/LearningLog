/* ABC Mail Order Grocery朝鲜蓟的售价是1.25美元/磅，甜菜的售价是0.65美元/磅，胡萝卜的售价是0.89美元/磅。
 * 在添加运输费用之前，他们为100美元的订单提供5%的打折优惠。对5磅或以下的定单收取3.50美元的运输和装卸费用；
 * 超过5磅而不足20磅的定单收取1O.OO美元的运输和装卸费用：20磅或以上的运输，在8美元基础上每磅加收0.1美元。
 * 编写程序，在循环中使用switch语句，以便对输入a的响应是让用户输入所需的朝鲜蓟磅数，
 * b为甜菜的磅数，c为胡萝卜的磅数，而q允许用户退出订购过程。
 * 然后程序计算总费用、折扣和运输费用（如果有运输费的话），以及总数。
 * 随后程序应该显示所有的购买信息：每磅的费用、订购的磅数、该订单每种蔬菜的费用、订单的总费用、折扣，
 * 如果有的话加上运输费用，以及所有费用的总数。
 *
 *
 * 蓟     1.25美元/磅
 * 甜菜   0.65美元/磅
 * 胡萝卜 0.89美元/磅
 * 满100折扣       5%(运费之前）
 * 运输装卸费（5磅或以下）3.50美元
 * 运输装卸费（超过5磅不足20磅）1O.OO美元
 * 运输装卸费(20磅或以上,8美元基础上) 每磅加收0.1美元。
 * 在循环中使用switch语句
 * a的响应是让用户输入所需的朝鲜蓟磅数，
 * b为甜菜的磅数，
 * c为胡萝卜的磅数，
 * 而q允许用户退出订购过程。
 * 计算总费用、折扣和运输费用（如果有运输费的话），以及总数。
 * 购买信息：每磅的费用、订购的磅数、该订单每种蔬菜的费用、订单的总费用、折扣，运输费用,总数
 * 一个循环交互选购蔬菜，选购时就打印出各种信息
 */
#include <stdio.h>

int main()
{
    float thistle_pri=1.25, beet_pri=0.65, carrot_pri=0.89;
    float thistle_pou=0, beet_pou=0, carrot_pou=0;

    float pound=0, freight=0, freight_20=0, discount=0, total=0, count=0, subtotal=0;
    char ch = '\0';
    while(ch != 'q')
    {
        printf("a.朝鲜蓟         b.甜菜\nc.胡萝卜         q.退出\nx.清空购物车\n");
        printf("请输入要选购的蔬菜品种：");
        ch =getchar();
        if(ch != 'x')
        {
            getchar();
            printf("请输入磅数:");
            scanf("%f", &count);
        }
        else
            printf("已清空购物车！\n");
        switch (ch)
        {
        case 'a':
            thistle_pou += count;
            break;
        case 'b':
            beet_pou += count;
            break;
        case 'c':
            carrot_pou += count;
            break;
        case 'q':
            ch = 'q';
            break;
        case 'x':
            thistle_pou = 0;
            beet_pou = 0;
            carrot_pou = 0;
            freight = 0;
            pound = 0;
            freight_20 = 0;
            discount = 0;
            total = 0;
            subtotal = 0;
            break;
        }
        subtotal = thistle_pou*thistle_pri+beet_pou*beet_pri+carrot_pou*carrot_pri;
        pound = thistle_pou+beet_pou+carrot_pou;
        if(pound <= 5 && pound > 0)
            freight = 3.5;
        else if(pound > 5 && pound < 20)
            freight = 10;
        if(pound > 20 && subtotal > 8)
            freight_20 = (pound-20) * 0.1;
        if(subtotal > 100)
            discount = subtotal * 0.05;
        total = subtotal + freight + freight_20 - discount;
        putchar(10);

        printf("序号     商品       单价     重量     金额\n");
        printf(" 1.     朝鲜蓟     %5.2f    %5.2f    %5.2f\n", thistle_pri, thistle_pou, thistle_pou*thistle_pri);
        printf(" 2.     甜菜       %5.2f    %5.2f    %5.2f\n", beet_pri, beet_pou, beet_pou*beet_pri);
        printf(" 3.     胡萝卜     %5.2f    %5.2f    %5.2f\n", carrot_pri, carrot_pou, carrot_pou*carrot_pri);
        printf(" 4.     运输装卸费                   %5.2f\n", freight+freight_20);
        printf(" 5.     折扣                         %5.2f\n", discount);
        printf("        合计：              %5.2f    %5.2f\n\n\n", pound, total);
        getchar();
    }
    return 0;
}
