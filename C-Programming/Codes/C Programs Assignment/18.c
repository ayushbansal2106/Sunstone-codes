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
    int temp;
    printf("Enter the Temperatur in Centicrages: ");
    scanf("%d",&temp);
    if (temp<=0)
    {
        printf("Freezing weather");
    }
    else if(temp>0&&temp<=10)
    {
        printf("Very cold weather");
    }
    else if(temp>10&&temp<=20)
    {
        printf("Cold weather");
    }
    else if(temp>20&&temp<=30)
    {
        printf("Normal Temp");
    }
    else if(temp>30&&temp<=40)
    {
        printf("Its Hot");
    }
    else
    {
        printf("Its very Hot");
    }
    
    return 0;

}