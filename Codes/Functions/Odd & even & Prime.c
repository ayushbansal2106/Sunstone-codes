#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<ctype.h>
#include<stdarg.h>
#include<signal.h>
#include<setjmp.h>
#include<locale.h>
#include<errno.h>
#include<assert.h>

int isPrime(int n);
int isEven(int n);
void checkNumber(int n);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    checkNumber(number);

    return 0;
}

int isPrime(int n)
{
    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n - (n / i) * i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int isEven(int n)
{
    while (n > 1)
    {
        n -= 2;
    }

    return n == 0;
}

void checkNumber(int n)
{
    if (isEven(n))
    {
        if (isPrime(n))
        {
            printf("The number is Even & Prime.\n");
        }
        else
        {
            printf("The number is Even & Non-Prime.\n");
        }
    }
    else
    {
        if (isPrime(n))
        {
            printf("The number is Odd & Prime.\n");
        }
        else
        {
            printf("The number is Odd & Non-Prime.\n");
        }
    }
}
