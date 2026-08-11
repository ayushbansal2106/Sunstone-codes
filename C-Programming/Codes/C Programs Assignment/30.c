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
    int n;
    float sum = 0.0;
    printf("Input the number of terms : ");
    scanf("%d", &n);
    printf("Harmonic series:\n");
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            printf("1/%d ", i);
        }
        else
        {
            printf("1/%d + ", i);
        }
        sum += (1.00 / i);
    }
    printf("\nSum of Series upto %d terms : %.6f\n", n, sum);
    return 0;
}