#include <stdio.h>
int main()
{
    float p, r, t, s;
    printf("Finding the Simple Interest\n");
    printf("Enter the Principal Amount\n");
    scanf("%f",&p);
    

    printf("Enter the Rate of Interest\n");
    scanf("%f",&r);

    printf("Enter the Time Period\n");
    scanf("%f",&t);

    s=(p*r*t)/100;
    printf("Simple Interest: (Principal * Rate of Interest * Time Period)/100\n");
    printf("Simple Interest: (%.2f * %.2f * %.2f)/100\n",p,r,t);
    printf("Simple Interest: %.2f",s);
return 0;
}