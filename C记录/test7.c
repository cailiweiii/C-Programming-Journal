
#include <stdio.h>

int main(void)
{
    int n, i = 1, sum = 0;
    printf("请输入一个整数:");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid\n");
        return (0);
    }
    else
    {
        do
        {
            sum = sum + i;
            i++;
        } while (i <= n);
    }

    printf("1-n的和为:%d", sum);
    return 0;
}
