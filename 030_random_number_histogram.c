#include <stdio.h>
#include <stdlib.h>
#define N 20

int a[N];

void gen_random(int upper_bound)
{
    for (int i = 0; i < N; i++)
    {
        int x=rand()%upper_bound;
        a[i]=x;
    }
}

void print_random(void)
{
    for (int i = 0; i < N; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int howmany(int value)
{
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        if (a[i]==value)
        {
            count=count+1;
        }
    }

    return count;
}



int main(void)
{
    int histogram[10] = {0};

    gen_random(10);
    print_random();

    for (int i = 0; i < N; i++)
    {
        histogram[a[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d has %d\n",i,histogram[i]);
    }

    int max = 0;
    for (int i = 0; i < 10; i++)
    {  
        if (histogram[i]>max)   
        {
        max=histogram[i];
        }
    }
   for (int level= max; level>=1; level--)
   {
    for (int i = 0; i < 10; i++)
    {
        if (histogram[i] >= level)
        {
            printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    printf("\n");
   }
   for (int i = 0; i < 10; i++)
   {
    printf("%d ",i);
   }
   
    return 0;
}

