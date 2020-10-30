#include <stdio.h>

int main()
{
    char ming[10];
    printf("ÇëÊäÈëÄúµÄĞÕÃû£º");
    scanf("%s", ming);
    printf("\"%s\n\"", ming);
    printf("\"%20s\"\n", ming);
    printf("\"%-20s\"\n", ming);
    printf("\"%*s\"\n", strlen(ming)+3, ming);
    return 0;
}
