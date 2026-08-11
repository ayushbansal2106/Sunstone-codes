#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("\n");
    char s[100];
    scanf("%[^\n]%*c", &s);
    printf("%s\n", s);
    scanf("\n");
    char sen[100];
    scanf("%[^\n]%*c", &sen);
   printf("%s\n", sen);

    return 0;
}