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

void sum();
void sub(int, int);
int mul();
int divi(int, int);

int main()
{
    sum(); //calling sum

    int c, d;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &c, &d);
    sub(c, d); //calling sub

    int result = mul();
    printf("Multiplication = %d\n", result);

    int result1 = divi(c, d);
    printf("Division = %d\n", result1);

    return 0;
}

void sum()
{
    int a, b, sum = 0;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum = %d\n", sum);
}

void sub(int c, int d)
{
    printf("Difference = %d\n", c - d);
}

int mul()
{
    int a, b;
    printf("Enter 2 numbers for multiplication: ");
    scanf("%d %d", &a, &b);
    return a * b;
}

int divi(int c, int d)
{
     if (d == 0) 
    {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return c / d;
}