#include <stdio.h>
void insertion_sort(int a[], int n)
{
    for (int j = 1; j < n; j++)
    {
        int key = a[j]; // 保存要换的元素
        int i = j - 1;  // 因为是要跟前一个元素换所以要减一

        while (i >= 0 && a[i] > key)
        {
            a[i + 1] = a[i]; // ① 将a[i]向右移动一格

            i--; // ② 让i向左移动一格
        }

        a[i + 1] = key; // ③ 将key放入正确位置
    }
}

int main(void)
{
    int a[5] = {5, 4, 3, 2, 1};

    insertion_sort(a, 5);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
