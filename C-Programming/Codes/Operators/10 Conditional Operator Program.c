#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter the value of m: ");
    scanf("%d",&m);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    (m > n)?printf("m is greater than n that is %d > %d", m, n):printf("n is greater than m that is %d > %d",n, m);
    return 0;
}