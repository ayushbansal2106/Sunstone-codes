#include<stdio.h>
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
    int temp;
    printf("Enter the temperature in centigrade: ");
    scanf("%d",&temp);
    printf("Temperature in Fahrenheit: %d",(temp*(9/5)+32));
    return 0;

}