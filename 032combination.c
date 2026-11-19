#include <stdio.h>
void combine(int a[], int n, int m,int start, int depth, int selected[])
{
    if (depth == m)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", selected[j]);
        }

        printf("\n");
        return;
    }

    for (int i = start; i < n; i++)
    {
        selected[depth] = a[i];

        combine(a, n, m, i+1, depth+1, selected);
    }
}
int main(void)
{
    int a[4] = {1, 2, 3, 4};
    int selected[2];

    combine(a, 4, 2, 0, 0, selected);

    return 0;
}
