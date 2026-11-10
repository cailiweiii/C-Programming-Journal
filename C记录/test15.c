
#include <stdio.h>
#include <math.h>

double myround(double x);

int main(void)
{
    double a;

    printf("请输入一个小数: ");
    scanf("%lf", &a);
    double result = myround(a);
    printf("四舍五入结果为:%.2f", result);

    return 0;
}

double myround(double x)
{
    if (x >= 0)
    {
        return floor(x + 0.5);
    }
    else
    {
        return ceil(x - 0.5);
    }
}
