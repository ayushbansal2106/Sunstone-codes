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
    int first, second, third, fourth, fifth,sum=0;
    printf("Input the first number: ");
    scanf("%d",&first);

    printf("Input the second number: ");
    scanf("%d",&second);

    printf("Input the third number: ");
    scanf("%d",&third);

    printf("Input the fourth number: ");
    scanf("%d",&fourth);

    printf("Input the fifth number: ");
    scanf("%d",&fifth);

    if(first%2!=0)
    {
        sum+=first;
    }
    if(second%2!=0)
    {
        sum+=second;
    }
    if(third%2!=0)
    {
        sum+=third;
    }
    if(fourth%2!=0)
    {
        sum+=fourth;
    }
    if(fifth%2!=0)
    {
        sum+=fifth;
    }
    printf("Sum of all odd values: %d",sum);
    return 0;

}