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
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is an even integer",num);
    }
    else
    {
        printf("%d is an odd integer", num);
    }
    return 0;

}