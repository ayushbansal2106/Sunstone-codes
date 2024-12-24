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
int main()
{
    int ch;

    for(ch=0; ch<=255; ch++)
    {
        printf("%d %c\n",ch, ch);
    }
    return 0;
}