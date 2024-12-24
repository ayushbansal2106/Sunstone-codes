#include <stdio.h>

int main()
{
    int number, guess;
    int n;
    printf("To start enter any random number(1-10): ");
    scanf("%d", &n);
    if (n >= 1 && n <= 10)
    {
        number = (n * 13) % 20 + 1;

        printf("Guess the number between 1 and 20: \n");

        while (1)
        {
            printf("Enter your guess: ");
            scanf("%d", &guess);

            if (guess < number)
            {
                printf("Too low! Try again.\n");
            }
            else if (guess > number)
            {
                printf("Too high! Try again.\n");
            }
            else
            {
                printf("Congratulations! You guessed the correct number: %d\n", number);
                break;
            }
        }
    }
    else
    {
        printf("Error! Wrong number entered");
    }
    return 0;
}
