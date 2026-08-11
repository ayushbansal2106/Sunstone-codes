#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <ctype.h>
#include <stdarg.h>
#include <signal.h>
#include <setjmp.h>
#include <locale.h>
#include <errno.h>
#include <assert.h>
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year.\n", year);
            }
            else
            {
                printf("%d is not a leap year.\n", year);
            }
        }
        else
        {
            printf("%d is a leap year.\n", year);
        }
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}