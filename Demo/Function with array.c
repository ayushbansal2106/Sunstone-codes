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

void func1();
void func2(int a);
int func3();
int func4(int c, char d);

int main()
{
    int i;
    printf("Enter the index of array: ");
    scanf("%d",i);
    func2(i);
    func1();
    return 0;
}

void func2(int a)
{
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void func1()
{
    int arr[2];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n", arr[i]);
    }
}