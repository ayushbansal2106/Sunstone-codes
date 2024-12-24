#include <stdio.h>
int main()
{
    unsigned int a=5, b=9;
    printf("a=%u,b=%u\n",a,b);
    printf("a&b=%u\n",a&b); //And Operator
    printf("a|b=%u\n",a|b); //Or Operator
    printf("a^b=%u\n",a^b); //Xor Operator
    printf("b<<1=%u\n",b<<1); //Left Shift Operator
    printf("a>>1=%u\n",a>>1); //Right Shift Operator 

    return 0;
}
