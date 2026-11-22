/*输入 n 个整数，找出其中最长的一段连续且严格递增的数字，输出：
1. 最长连续递增段的长度。
2. 这段数字第一次出现的起始位置（从1开始）*/
#include <stdio.h>
int main()
{
    int n;
    int a[20];
    printf("请输入整数:");
    scanf("%d", &n);

    printf("请输入数列:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("你输入的数是:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int count = 1;
    int maxLen = 1;
    int start = 1;
    int beststart = 1;
    for (int i = 0; i < n - 1; i++)
    {

        if (a[i + 1] > a[i])
        {
            count++;
        }
        else
        {
            count = 1;
            start = i + 2;
        }
        if (count > maxLen)
        {
            maxLen = count;
            beststart = start;
        }
    }

    printf("最长的长度是:%d\n", maxLen);
    printf("连续递增第一次出现在:%d",beststart);

    return 0;
}