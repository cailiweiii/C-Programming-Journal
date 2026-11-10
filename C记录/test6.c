
#include <stdio.h>

int main(void)
{
    int a;
    printf("请输入一个整数:");
    scanf("%d", &a);
    printf("个位是:%d\n", a % 10);
    printf("十位是:%d\n", (a / 10) % 10);

    return 0;
}
