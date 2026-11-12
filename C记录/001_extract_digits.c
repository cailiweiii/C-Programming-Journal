
#include <stdio.h>

void print_digits(int x);

int main(void)
{
    int a;
    printf("请输入一个整数:");
    scanf("%d", &a);
    print_digits(a);
    return 0;
}

void print_digits(int x)
{
    printf("个位是:%d", (x % 10));
    printf("十位是:%d", (x / 10) % 10);
}
