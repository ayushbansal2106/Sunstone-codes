/*
Write a menu driven program which has following options
1. Factorial of a number
2. fibonicc series
3. prime or not prime
4. even and odd number
5. exit
*/

#include <stdio.h>

void fibonacci(int num);
void odd_even(int num);
void isprime(int num);
void factorial(int num);


int main()
{
    int ch,n;
    do
    {
        printf("enter a choice :\n1.Factorial of number\n2.number is prime or not\n3.Odd or even\n4.fibanocci series\n5.Exit\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("\nenter a number");
            scanf("%d", &n);
            factorial(n);
            break;

        case 2:
            printf("\nenter a number");
            scanf("%d", &n);
            isprime(n);
            break;

        case 3:
            printf("enter a number");
            scanf("%d", &n);
            odd_even(n);
            break;
        case 4:
            printf("enter a number");
            scanf("%d", &n);
            fibonacci(n);
            break;
        case 5:
            printf("Exitting the program\n");
            break;
        default:
            printf("Wrong choice, Enter 1,2,3,4,5\n");
            break;
        }
    } while (ch != 5);
    return 0;
}

void fibonacci(int num)
{
    int a = 0, b = 1, result;
    for (int i = 1; i <= num; i++)
    {
        printf("%d value: %d\n", i, a);
        result = a + b;
        a = b;
        b = result;
    }
}

void odd_even(int num)
{
    if (num % 2 == 0)
    {

        printf("%d is even number\n", num);
    }
    else
    {
        printf("%d is odd number\n", num);
    }
}

void isprime(int num)
{
    if (num < 2)
    {
        printf("%d is not a prime no.\n", num);
    }
    for (int i = 2; i <= num; i++)
    {
        if (num % 2 == 0)
        {
            printf("%d is not a prime number\n", num);
        }
    }
    printf("%d is aprime number\n", num);
}

void factorial(int num)
{
    int f=1;
    while (num != 0)
    {
        f = f * num;
        num = num - 1;
    }
    printf("factorial of number:%d\n", f);
}