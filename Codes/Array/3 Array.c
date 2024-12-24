// Finding odd number and storing in an array and printing as per index

#include <stdio.h>
int main()
{
    int a = 0, i, n,m;
    printf("Enter the number you want to find odd till: ");
    scanf("%d", &n);
    printf("Enter the number you want to find odd till: ");
    scanf("%d", &m);
    int b[(n-m)/2];
    for (i = m; i < n; i++)
    {
        if(i%2!=0)
        {
            b[a] = i;
            a++;
        }
    }
    for (int i = 0; i < (n-m)/2; i++)
    {
        printf("b[%d] = %d\n", i, b[i]);
    }
    return 0;
}