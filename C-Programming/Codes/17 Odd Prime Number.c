#include <stdio.h>
int main()
{
    int a, b, i;
    printf("Enter a starting Number: ");
    scanf("%d",&a);
    printf("Enter a ending number: ");
    scanf("%d",&b);
    printf("Odd Numbers between %d and %d are: ",a,b);
    for(a;a<=b;a=a+2)
    {
        printf("%d, ",a);
    }
    int n=a;
    int isPrime=1;
    if(n==1 || n==0)
    {
        isPrime=0;
    }
    for(i=2;i*i<b;++i);
    {
        if(n%i==0)
        isPrime=0;
    }
    if(isPrime)
    {
        printf("\nThe number %d is not a prime number",a);
    }    
    else
    {
        printf("\nThe number %d is a prime number",a);
    }
  
    return 0;
}