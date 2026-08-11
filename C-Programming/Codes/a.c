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
    int a=0,b=1,next;
    printf("Fibonacci series: ");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a);
        next = a+b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;

}