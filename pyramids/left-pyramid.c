#include <stdio.h>

int main()
{
    int n = 4;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (j > (n - i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}