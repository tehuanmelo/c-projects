#include <stdio.h>

int main()
{
    int n = 5;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + (n - 1); j++)
        {
            if (j > (n - i) && j < (n + i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}