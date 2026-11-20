
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char gesture[3][10] = {
        "scissor",
        "stone",
        "cloth"
    };

    int man, computer, ret;

    srand((unsigned int)time(NULL));
    while (1)
    {
    computer = rand()%3;
    printf("Input 0-scissor 1-stone 2-cloth:\n");
    ret=scanf("%d",&man);
    if (ret != 1 )
    {
        printf("Invalid input!\n");
        break;;
    }
    if (man <0 || man > 2)
    {
        printf("Please input 0, 1 or 2.\n");
        continue;
    }
     printf("Your gesture:%s\nComputer's gesture:%s\n",gesture[man],gesture[computer]);

int result = (man - computer + 4) % 3 - 1;

if (result == 1)
{
    printf("Win\n");
}
else if (result==0)
{
    printf("Draw\n");
}
else
{
    printf("Lose\n");
}
    }
    return 0;
}
