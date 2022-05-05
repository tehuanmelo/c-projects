#include <stdio.h>

int fact(int);
int number;

int main()
{
    do
    {

        printf("Insert number: ");
        scanf("%d", &number);

    } while (number <= 0);

    printf("The factorial of %d is %d\n", number, fact(number));
}

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}