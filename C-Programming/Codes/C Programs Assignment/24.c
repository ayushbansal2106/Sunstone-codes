#include <stdio.h>

int main()
{
    int num, sum =0;
    printf("Input number of terms : ");
    scanf("%d", &num);
    printf("The odd numbers are: ");
    for (int i = 1; i <= 2 * num; i = i + 2)
    {
        printf("%d ",i);
        sum += i;
    }

    // int i=0,a=1;
    // while(i!=n)
    // {
    //     printf("%d ",a);
    //     sum +=a;
    //     a=a+2;
    //     i++;
    // }

    printf("\nThe Sum of odd Natural Number upto %d terms : %d",num,sum);
    return 0;
}