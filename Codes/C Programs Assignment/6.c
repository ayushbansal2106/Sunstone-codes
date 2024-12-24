#include <stdio.h>
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

int main()
{
    int x1, x2, y1, y2;
    double result;
    printf("Input x1: ");
    scanf("%d", &x1);

    printf("Input y1: ");
    scanf("%d", &y1);

    printf("Input x2: ");
    scanf("%d", &x2);

    printf("Input y2: ");
    scanf("%d", &y2);

    result = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Distance between the said points: %.2lf", result);
    return 0;
}