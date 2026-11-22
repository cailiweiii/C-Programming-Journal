/*编写一个 C 语言程序，读取一组整数，完成以下任务：
1. 找出这组整数中的最大值。
2. 统计最大值一共出现了多少次。
3. 找出最大值第一次出现的位置，位置从1开始计算*/ 
#include <stdio.h>
int main()
{
    int n;
    int a[20];
    printf("总共要输入多少个数:\n");
    scanf("%d", &n);
    printf("请输入数字:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("你输入的数字是:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    int max = 0;
    int i, k;
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[max])
        {
            max = i;
        }
    }

    printf("最大的数是:%d\n", a[max]);

    for (k = 0; k < n; k++)
    {
        if (a[k] == a[max])
        {
            break;
        }
    }
    printf("%d第一次出现在%d\n", a[max], k + 1);
    int count = 0;
    for (int j = 0; j < n; j++)
    {

        if (a[j] == a[max])
        {
            count++;
        }
    }
    printf("%d一共有%d个", a[max], count);
/*  */
    return 0;
}