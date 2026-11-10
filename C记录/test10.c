
#include <stdio.h>

int fib(int n);

int main(void)
{
    int n;

    printf("请输入 n: ");
    scanf("%d", &n);

    if (n <= 0 && n >= 20)
    {
        printf("None");
    }
    else
    {
        int result = fib(n);
        printf("第%d项是:%d", n, result);
    }

    return 0;
}

int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return (1);
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}
