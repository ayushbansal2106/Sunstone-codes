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
    int num1, num2, num3;

    printf("1st Number= ");
    scanf("%d",&num1);
    printf("2nd Number= ");
    scanf("%d",&num2);
    printf("3rd Number= ");
    scanf("%d",&num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("The 1st Number is the greatest among three\n");
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf("The 2nd Number is the greatest among three\n");
    }
    else
    {
        printf("The 3rd Number is the greatest among three\n");
    }

    return 0;
}