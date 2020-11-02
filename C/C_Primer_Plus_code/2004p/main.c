#include <stdio.h>
void test(void);

int main()
{
    test();
    test();
    test();
    printf("Which nobody can deny!\n");
    return 0;
}

void test(void)
{
    printf("For he's a jolly good fellow!\n");
}
