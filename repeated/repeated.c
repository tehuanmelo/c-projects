#include <stdio.h>

int main()
{
    int num;
    int arr[10] = {0};
    do
    {
        printf("Insert a number: ");
        scanf("%d", &num);
    } while (num <= 0);

    while (num != 0)
    {
        int rem = num % 10;
        if (arr[rem] == 1)
            break;
        else
            arr[rem] = 1;

        num /= 10;

    }

    if (num > 0)
        printf("Has repeated numbers\n");
    else
        printf("Has no repeated numbers\n");
}