#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;
    int n;

    do
    {
        printf("Choose the type of pyramid: 'L' = left 'R' = right 'S' = Simetric:(L/R/S) ");
        scanf(" %c", &c);
        c = tolower(c);
    } while (c != 'l' && c != 'r' && c != 's');

    do
    {
        printf("Choose the pyramid heigh: ");
        scanf("%d", &n);
    } while (n <= 0);

    if (c == 's')
    {
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
    else if (c == 'r')
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j > (n - i))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    else
    {
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
}
