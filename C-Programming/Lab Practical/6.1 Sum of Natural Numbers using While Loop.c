/*Calculate the sum of the first n natural numbers using a while loop.
Instruction
1. Declare 'n', 'sum = 0', and 'i = 1'.
2. Use 'scanf' to get 'n' from the user.
3. Use a 'while' loop to add 'i' to 'sum' and increment 'i' until 'i > n'.
4. Print the final 'sum' using 'printf'.*/

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter a positive integer:\n");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}