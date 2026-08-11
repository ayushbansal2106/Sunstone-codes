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
    int x=10, y=20;
    int *ptr1, *ptr2;
    ptr1=&x;
    ptr2=&y;

    printf("values before swapping %d %d\n",x,y);
    int temp;
    temp=*ptr1;
    printf("temp: %d\n",temp);
    *ptr1=*ptr2;
    printf("ptr1: %d\n",*ptr1);
    *ptr2=temp;
    printf("ptr2: %d\n",*ptr2);

    printf("Values after swapping %d %d\n",x,y);
 return 0;

}