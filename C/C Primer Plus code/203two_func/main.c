#include <stdio.h>
//在一个文件中使用两个函数

void butler(void);
int main()
{
    printf("I will summon the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
    return 0;
}

void butler(void)
{
    printf("You rang, sir?\n");
}
