#include<stdio.h>

int main(void)
{
    char ch;
    char space=' ';
    char a='A';
    char x;
    int i,j,n,k,l;

    printf("请输入一个大写字母：\n");
    scanf("%c",&ch);

    n=ch-64;   //A的ASCII码值为65
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n-i;j++)   //空格数
        {
            putchar(space);
        }

        a='A';   //放在循环外是为了使每次从A开始
        for(k=0;k<=i;k++)   //升序
        {
            printf("%c",a);
            a++;
        }

        x=ch+i-n;
        for(l=i;l>0;l--)   //降序
        {
            printf("%c",x);
            x--;
        }
        printf("\n");
    }


    return 0;
 }
