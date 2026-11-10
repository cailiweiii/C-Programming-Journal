
#include <stdio.h>

int main(void)
{
    int i = 1;
    int count = 0;

    while (i <= 100)
    {
        if ((i % 10) / 9 == 1)
        {
            count = count + 1;
        }

        if (((i / 10) % 10) / 9 == 1)
        {
            count = count + 1;
        }

        i++;
    }

    printf("Count: %d\n", count);

    return 0;
}
