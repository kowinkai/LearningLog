#include <stdio.h>

int main()
{
    char a[26];
    for(int i=0; i<26 ; i++)
    {
        a[i] = 'a' + i;
        printf("a[%d]=%c\n", i, a[i]);
    }
    return 0;
}
