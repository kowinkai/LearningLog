#include <stdio.h>
#include <string.h>

int main()
{
    char xing[10];
    char ming[10];
    printf("请分别输入您的姓与名：");
    scanf("%s %s", xing, ming);
    printf("%s %s\n", xing, ming);
    printf("%*d %*d\n", strlen(xing), strlen(xing), strlen(ming), strlen(ming));
    printf("%s %s\n", xing, ming);
    printf("%-*d %-*d\n", strlen(xing), strlen(xing), strlen(ming), strlen(ming));
    return 0;
}
