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
    char firstname[50], lastname[50];
    int yearOfBirth;

    printf("Input your firstname: ");
    scanf("%s", firstname);

    printf("Input your lastname: ");
    scanf("%s", lastname);

    printf("Input your year of birth: ");
    scanf("%d", &yearOfBirth);

    printf("%s %s %d\n", firstname, lastname, yearOfBirth);

    return 0;
}