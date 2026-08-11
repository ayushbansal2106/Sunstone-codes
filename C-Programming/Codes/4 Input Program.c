#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);         //Used to take input
    printf("Enter the value of b:");
    scanf("%d",&b);
    c=a+b;
    printf("Sum of a & b : %d",c);
    return 1;


    // 2nd way to write the code


    int A,B;
    printf("Enter the value of A & B: ");
    scanf("%d%d",&A,&B);
    printf("Sum of A & B: %d",A+B);
    return 0;
}