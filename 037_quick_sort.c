#include <stdio.h>
int a[] = {4, 6, 2, 5, 1, 3};
int partition(int start, int end)
{
    int pivot = a[start];
    int pos = start;

    for (int j = start + 1; j <= end; j++)
    {
        if (a[j] < pivot)
        {
            pos++;           // ① pos加1
            int temp = a[j]; // ② 交换a[pos]和a[j]
            a[j] = a[pos];
            a[pos] = temp; // 提示：使用temp变量
        }
    }

    int temp = a[pos];
    a[pos] = a[start];
    a[start] = temp; // ③ 交换a[start]和a[pos]
                     // 把pivot放到最终位置

    return pos; // ④ 返回pivot最终所在的下标
}

void quicksort(int start, int end)
{
    if (start < end)
    {
        int mid = partition(start, end); // ① 调用partition()，将返回值保存到mid

        quicksort(start, mid - 1); // ② 递归排序基准值左边的区间

        quicksort(mid + 1, end); // ③ 递归排序基准值右边的区间
    }
}

int main(void)
{
    quicksort(0, 5);

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", a[i]);
    }
    // ② 使用for循环输出数组的6个元素

    return 0;
}
