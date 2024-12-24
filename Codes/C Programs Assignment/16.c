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
    int physics, chemistry, maths, totalpcm, totalpm;
    printf("Input the marks obtained in Physics : ");
    scanf("%d", &physics);
    printf("Input the marks obtained in Chemistry : ");
    scanf("%d", &chemistry);
    printf("Input the marks obtained in Maths : ");
    scanf("%d", &maths);

    totalpcm = physics + chemistry + maths;
    totalpm = physics + maths;

    printf("Total marks of Maths, Physics and Chemistry : %d\n",totalpcm);
    printf("Total marks of Maths and Physics : %d\n",totalpm);

    if(maths>=65&&physics>=55&&chemistry>=50&&(totalpcm>=188||totalpm>=137))
    {
        printf("The candidate is eligible for admission.");
    }
    else
    {
        printf("The candidate is not eligible for admission");
    }
    return 0;
}