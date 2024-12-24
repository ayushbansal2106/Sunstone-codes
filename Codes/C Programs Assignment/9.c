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
    int hours, minutes;
    printf("Input hours: ");
    scanf("%d",&hours);
    printf("Input minutes: ");
    scanf("%d",&minutes);
    printf("Total minutes: %d",(hours*60)+minutes);
    return 0;

}