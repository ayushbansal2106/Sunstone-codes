#include <stdio.h>

int main() {
    unsigned int n;
    unsigned int m = 1;
    printf("Enter the value of n:\n");
    scanf("%d",&n);

    for (unsigned int i = 1; i <= n; ++i) 
    {
        m *= 2;  
        printf("%d\n", m);
    }

    return 0;
}