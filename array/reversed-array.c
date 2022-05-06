#include <stdio.h>

int main()
{
    int N;
    
    do
    {
        printf("Enter the array size: ");
        scanf("%d", &N);
    } while (N <= 0);

    int arr[N];
    

    for (int i = 0; i < N; i++)
    {
        printf("Insert index %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    

    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

}