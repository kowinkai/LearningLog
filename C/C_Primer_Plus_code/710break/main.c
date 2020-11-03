/* 使用break退出循环
 */
#include <stdio.h>

int main()
{
    float length, width;

    printf("Enter the length of the rectangle: \n");
    while(scanf("%f", &length) == 1)                            //感觉这个外循环与前面这句printf有点多余！
    {
        printf("Enter the length of the rectangle: \n");
        while(scanf("%f", &length) == 1)
        {
            printf("Length = %0.2f: \n", length);
            printf("Enter its width: \n");
            if(scanf("%f", &width) != 1)
                break;
            printf("Width = %0.2f: \n", width);
            printf("Area = %0.2f: \n", length * width);
            printf("Enter the length of the rectangle: \n");
        }
    }
    printf("Done.\n");
    return 0;
}
