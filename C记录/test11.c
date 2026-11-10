
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int main(void)
{
    int a, b;

    printf("请输入两个整数: ");
    scanf("%d %d", &a, &b);

    if (a == 0 && b == 0)
    {
        printf("Undefined\n");
    }
    else
    {
        int result = gcd(a, b);
        printf("GCD: %d\n", result);
    }

    return 0;
}

int gcd(int a, int b)
{
    int c;

    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    return (a);
}
