#include <stdio.h>
#define Z_H 60

int main(void)
{
    int fen = 1, xiaoshi = 0;
    while(fen+xiaoshi)
    {
        printf("请输入分钟数：");
        scanf("%d", &fen);
        xiaoshi = fen / Z_H;
        fen = fen % Z_H;
        printf("%d小时,%d分钟\n", xiaoshi, fen);
    }
    return 0;
}
