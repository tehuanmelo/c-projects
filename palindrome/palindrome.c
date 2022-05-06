#include <stdio.h>

int main(){
    int number;

    do
    {
        printf("Insert a number: ");
        scanf("%d", &number);
    } while (number <= 0);
    
    int holder;
    int remainder;
    int result = 0;

    holder = number;

    while (holder != 0)
    {
        result *= 10;
        remainder = (holder % 10);
        result += remainder;
        holder /= 10;

    }

    if (number == result)
        printf("It is palindrome\n");
    else
        printf("Is not palindrome\n");


    return 0;
}