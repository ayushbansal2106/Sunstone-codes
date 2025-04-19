#include<stdio.h>

int main()
{
    char cal;
    printf("Press (+) for sum \nPress (-) for sub \nPress (*) for mul \nPress (/) for div \n");
    printf("\nEnter the number");
    scanf("%c",&cal);
    int a,b,sum ,sub, mul, div;
   

    switch (cal)
    {

        case '+' :
        {

            scanf("%d %d",&a,&b);
            sum = a+b;
            printf("%d + %d = %d",a,b,sum);
    }
        break;
        
        case '-' :
        {
            scanf("%d %d",&a,&b);
            sub = a-b;
            printf("%d - %d = %d",a,b,sub);
        }
        break;

        case '*':
        {
       
            scanf("%d %d",&a,&b);
            mul = a*b;
            printf("%d * %d = %d",a,b,mul);
        }
        break;

        case '/':
        {
            scanf("%d %d",&a,&b);
            div = a/b;
            printf("%d / %d = %d",a,b,div);
        }
        break;


        default:
        printf("invalid character");
        break;
    }
}
