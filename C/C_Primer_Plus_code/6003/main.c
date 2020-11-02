#include <stdio.h>

int main()
{
    char x = 'F';
    for(int i = 1; i <= 6; i++)
    {
        for(int j = 1; j <= i;j++)
        {
            printf("%c", x);
            x = x - 1;
        }
        printf("\n");
        x = 'F';
    }
    return 0;
}
