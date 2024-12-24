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
    int a,b;
    printf("Enter 2 no.");
    scanf("%d%d",&a,&b);
    int result= sum(a,b);
    printf("sum= %d",result); 
}

int sum(int x, int y)
{
    return x+y;
}