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
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if(age>18)
    {
        printf("Congratulation! You are eligible for casting your vote.");
    }
    else
    {
        printf("Sorry! You are not eligible for casting your vote.");
    }
    return 0;

}