
#include <stdio.h>

void sort(int a[], int n)
{
    int i, j, min, temp;
    for ( i = 0; i < n-1; i++)
    {
        min=i;
    for ( j = i+1; j< n; j++)
    {
        if (a[j]<a[min])
        {
            min=j;
        }
    }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
        
}

int main(void)
{
    int a[10], i;

    printf("请输入10个整数:\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }

    sort(a, 10);

    printf("排序后的数组为：");

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

