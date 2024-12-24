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
    int num1, num2;
    printf("Input any two numbers separated by comma : ");
    scanf("%d,%d",&num1,&num2);
    printf("The sum of the given numbers : %d\n",num1+num2);
    printf("The difference of the given numbers : %d\n",num1-num2);
    printf("The multiplication of the given numbers : %d\n",num1*num2);
    printf("The division of the given numbers : %d\n",num1/num2);
    return 0;

}