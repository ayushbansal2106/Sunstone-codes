#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int num = rand() %100 + 1;
    int n, count =0;
    do
    {
    printf("Guess a number between 1 to 100: \n");
    scanf("%d",&n);
    count++;
    if (n > 0 && n < 100)
    {
        if (n < num && n > 1)
        {
            printf("The number is short! Try again\n");
        }
        else if (n > num && n < 100)
        {
            printf("The number is large! Try again\n");
        }
        else if (n == num)
        {
            printf("Congratulation! You got the guess right in %d chances\n",count);
        }
        else
        {
            printf("Invalid input\n");
        }
    }
} while (n != num);
}