#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<ctype.h>
#include<stdarg.h>
#include<signal.h>
#include<setjmp.h>
#include<locale.h>
#include<errno.h>
#include<assert.h>

void Sum ();
void difference ();

int main()
{
    int a,b;
    printf("Enter 2 no.");
    scanf("%d%d",&a,&b);
    sum(a,b);
    difference(a,b);
    return 0;
}

void sum(int a, int b)
{
    printf("sum= %d\n",a+b);
}

void difference(int a, int b)
{
    printf("Difference= %d", a-b);
}