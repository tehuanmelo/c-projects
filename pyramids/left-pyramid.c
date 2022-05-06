#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Choose the pyramid heigh: ");
        scanf("%d", &n);
    } while (n <= 0);
    
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