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
    int a, b;
printf("Enter a decimal number: ");
scanf("%d", &a); // Only accepts decimal

printf("Enter a number (can be octal or hex): ");
scanf("%i", &b); // Accepts decimal, octal (e.g., 021), or hex (e.g., 0x21)

printf("Decimal input: %d, Mixed input: %d\n", a, b);


}