#include <stdio.h>
#define LEN 8
int a[LEN] = {5, 2, 4, 7, 1, 3, 2, 6};
void merge(int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1], right[n2];

    int i, j, k;

    for (i = 0; i < n1; i++)
    {
        left[i] = a[start + i];
    }

    for (j = 0; j < n2; j++)
    {
        right[j] = a[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = start;

    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            a[k] = left[i]; // ① 把left[i]写入a[k]
            i++;            // ② i增加1
        }
        else
        {
            a[k] = right[j]; // ③ 把right[j]写入a[k]
            j++;             // ④ j增加1
        }

        k++; // ⑤ k增加1
    }
    // 下一步再处理某一边剩余的元素
    while (i < n1)
    {
        a[k] = left[i]; // ① 将left[i]写入a[k]

        i++; // ② i增加1

        k++; // ③ k增加1
    }

    while (j < n2)
    {
        a[k] = right[j]; // ④ 将right[j]写入a[k]

        j++; // ⑤ j增加1

        k++; // ⑥ k增加1
    }
}

void sort(int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;

        sort(start, mid); // ① 递归排序左半部分

        sort(mid + 1, end); // ② 递归排序右半部分

        merge(start, mid, end); // ③ 将两部分合并
    }
}

int main()
{
    sort(0, LEN-1);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
}