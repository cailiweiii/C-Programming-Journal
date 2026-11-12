#include <stdio.h>
void diamond (int n,char ch);
int main (void)
{
    diamond(5,'+');
    return(0);
}
void diamond (int n,char ch)
{
    int mid =n/2;
    for ( int i = 0; i <= mid; i++)
    {
        for (int j = 0; j<mid-i; j++)
        {
            printf(" ");
        }
            for ( int k=0; k <2*i+1; k++)
            {
                printf("%c",ch);
            }
            printf("\n");
    }
    for (int i = mid-1; i >=0; i--)
    {
        for ( int j = 0; j < mid-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k< 2*i+1; k++)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    
    
}