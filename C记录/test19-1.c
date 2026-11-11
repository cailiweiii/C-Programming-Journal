
#include <stdio.h>

long long fac(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * fac(n - 1);
}

int main(void)
{
    int m, n;
    long long s;

    printf("请输入m和n:");
    scanf("%d%d", &m, &n);

   if (0 <= n && n<= m && m <= 20)
   {
    s=fac(m)/(fac(m-n)*fac(n));
    printf("S=%lld",s);
   }
   else
   {
    printf("输入有误,请重新输入");
   }
    return 0;
}


