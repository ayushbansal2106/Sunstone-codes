#include <stdio.h>
int main()
{
    int a=5, b=10, c;
c=a+b;                  //Simple Assignment Operator
printf("C=%d\n",c);

c+=a;                   //Add AND assignment operator
printf("c=%d\n",c);

c-=b;                   //Subtract AND assignment operator
printf("c=%d\n",c);

c*=a;                   //Multiply AND assignment operator
printf("c=%d\n",c);

c/=a;                   //Divide AND assignment operator
printf("c=%d\n",c);

c%=b;                  //Modulus AND assignment operator
printf("c=%d\n",c);

return 0;
}