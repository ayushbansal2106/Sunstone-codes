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
    int x=10;   //declare an integer variable
    int *ptr;   //declare a pointer to a integer

    ptr = &x;   // Assign the address of x to the pointer ptr
    printf("Value of x: %d\n",x);
    printf("Address of x: %d\n",&x);

    //Printing the value of x using pointers
    printf("Value of x: %d\n",*ptr);
    printf("Address of x: %d\n",ptr);

 return 0;

}