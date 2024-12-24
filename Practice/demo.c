#include <stdio.h>

// Function prototype declaration
void sum();

int main()
{
    sum(); // Call the sum function

    return 0; // Successful execution
}

void sum()
{
    int n, reversed = 0, original, digit;

    // Prompt user for input
    printf("Enter an integer: ");

    // Read input
    scanf("%d", &n);

    original = n;

    // Reverse the number
    while (n != 0)
    {
        digit = n % 10;                   // Get last digit
        reversed = reversed * 10 + digit; // Build reversed number
        n = n / 10;                       // Remove last digit from n
    }

    // Check if original number is equal to its reverse
    if (original == reversed)
    {
        printf("%d is a palindrome number.\n", original); // Print the palindrome number
    }
    else
    {
        printf("%d is not a palindrome number.\n", original); // Indicate it is not a palindrome
    }
}
