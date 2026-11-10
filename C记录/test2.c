
#include <stdio.h>

int is_leap_year(int year);

int main(void)
{
    int a;
    printf("请输入年份:");
    scanf("%d", &a);
    int result = is_leap_year(a);

    switch (result)
    {
    case 1:
        printf("是闰年");
        break;

    default:
        printf("不是闰年");
        break;
    }

    return 0;
}

int is_leap_year(int b)
{
    if ((b % 4 == 0 && b % 100 != 0) || b % 400 == 0)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
