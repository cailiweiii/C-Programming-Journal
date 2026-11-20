#include <stdio.h>

void swap(int a[], int i, int j)
{
    int temp;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void permute(int a[], int start, int n, int m)
{
    if (start == m)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d", a[i]);
        }
        printf("\n");
        return;
    }
    for (int i = start; i < n; i++)
    {
        swap(a, start, i); // ① 选择当前位置的数字

        permute(a, start + 1, n, m); // ② 递归排列剩余数字

        swap(a, start, i); // ③ 恢复数组，尝试下一种选择
    }
}

int main(void)
{
    int a[4] = {1, 2, 3, 4};

    permute(a, 0, 4, 4);

    return 0;
}