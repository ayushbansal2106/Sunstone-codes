#include <stdio.h>
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

void even();
void odd(int);
int eves();
int evenodd(int c);

int main()
{
    //  using no argument no return type
    even();


     // using with argument no return type
    
        int c;
        printf("Enter a number: ");
        scanf("%d", &c);
        odd(c);
      //using no argument with return type
        int result = eves();
        if(result == 0)
        {
            printf("number is odd\n");
        }
        else
        {
            printf("number is even\n");
        }
    

       //using with arguments with return type
        int result1 = evenodd(c);
        if(result1 == 0)
        {
            printf("number is odd\n");
        }
        else
        {
            printf("number is even\n");
        }
    
}

void even()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a%2==0)
    {
        printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
}

void odd(int c)
{
    if (c%2==0)
    {
        printf("number is even\n");
        }
    else
    {
        printf("number is odd\n");
    }
}

int eves()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int evenodd(int c)
{
    if (c%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}