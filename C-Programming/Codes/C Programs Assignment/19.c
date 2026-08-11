#include <stdio.h>

int main()
{
    int numbers[100], num, i, count = 0;
    int isDuplicate;

    printf("Enter a series of numbers (enter a duplicate to stop):\n");

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        isDuplicate = 0;

        for (i = 0; i < count; i++)
        {
            if (numbers[i] == num)
            {
                isDuplicate = 1;
                break;
            }
        }

        if (isDuplicate)
        {
            printf("Duplicate number entered. Exiting.\n");
            break;
        }

        numbers[count] = num;
        count++;
    }

    return 0;
}
