
#include <stdio.h>

int main(void)
{
    int n;
    int result = 1;
    printf("请输入n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }

    printf("%d! = %d\n", n, result);

    return 0;
}
