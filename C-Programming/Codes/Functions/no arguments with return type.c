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

int sum();

int main()
{
    int result = sum();
    printf("Sum= %d",result);
}

int sum()
{
    int a,b;
    printf("Enter 2 no.");
    scanf("%d%d",&a,&b);
    return a+b;
}