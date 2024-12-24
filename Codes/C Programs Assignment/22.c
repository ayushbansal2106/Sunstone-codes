#include <stdio.h>

int main()
{
    int number, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    while (i <= 10)
    {
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }

    return 0;
}
