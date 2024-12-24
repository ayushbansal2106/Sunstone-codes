#include <stdio.h>
#include <math.h>

int main()
{
    int num, original_num, n = 0, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original_num = num;

    while (original_num != 0)
    {
        original_num /= 10;
        n++;
    }

    original_num = num;

    while (original_num > 0)
    {
        result = result + (pow(original_num % 10,n));
        original_num /= 10;
    }

    if (result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}