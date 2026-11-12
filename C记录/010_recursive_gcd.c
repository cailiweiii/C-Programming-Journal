
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
    if (b == 0)
    {
        return (abs(a));
    }
    else if (abs(a) % abs(b) == 0)
    {
        return (abs(b));
    }
    else
    {
        return (gcd(abs(b), abs(a) % abs(b)));
    }
}
