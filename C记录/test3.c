
#include <stdio.h>

int main(void)
{
    while (1)
    {
        int a;
        printf("请输入一个整数:");
        scanf("%d", &a);
        if (a > 0)
        {
            printf("Positive\n");
        }
        else if (a == 0)
        {
            printf("Zero\n");
        }
        else
        {
            printf("Negative\n");
        }
    }

    return 0;
}
