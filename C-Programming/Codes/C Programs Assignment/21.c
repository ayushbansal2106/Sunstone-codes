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
    int n;
    int cube, result=0;
    printf("Enter the value you want the sum till: ");
    scanf("%d",&n);
    for(int i=0; i<=n;i++)
    {
        if(i%2==0)
        {
            cube = pow(i,3);
            result += cube;
        }
    }
    printf("Sum of cube of even number upto %d: %d",n,result);
    return 0;

}