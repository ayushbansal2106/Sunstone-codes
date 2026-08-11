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

int sum();     //declaring the function    |   here void = return type    |    sum is function name;
int sw();

int main()
{
    sum();
    sw();
    return 0;
}

int sum()
{
    int a,b,sum=0;
    printf("Enter 2 No: ");
    scanf("%d %d", &a, &b);
    sum =a+b;
    printf("sum = %d\n", sum);
}
int sw()
{
    char operator;
    double num1, num2, result;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter a number: ");
    scanf("%lf", &num2);

    switch (operator) 
    {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
        case '/':
            if (num2 != 0)
            {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
            }
        break;
        default:
            printf("Error: Invalid operator.\n");
        break;
    }

    return 0;

}