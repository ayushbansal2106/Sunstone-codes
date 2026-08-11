# include<stdio.h>

int isPrime(int num);

int main()
{
    int start, end;
    printf("Enter the starting number:");
    scanf("%d",&start);
    printf("Enter the ending number:");
    scanf("%d",&end);
    printf("Prime numbers between %d and %d are: ",start,end);
    for (int i = start; i <=end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ",i);
        }
        
    }
    return 0;
}

int isPrime(int num)
{
    if (num<=1)
    {
        return 0;
    }
    for (int  i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
        return 1;
    }
    
    
}