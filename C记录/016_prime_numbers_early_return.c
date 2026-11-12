
#include <stdio.h>

int is_prime(int n);
int main(void)
{
   for ( int a = 0; a<=100; a++)
   {
    if (is_prime(a)==1)
    {
        printf("%d ",a);
    }
     
   }
   

    return 0;
}

int is_prime(int n)
{
    int i;

    if (n < 2)
    {
        return 0;
    }

    for (i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return(0);
        }
    }

        return 1;
}

  
