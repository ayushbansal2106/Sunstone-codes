#include <stdio.h>

void nestfor();
void nestedfor();
void nestif();

int main()
{
    
    
    return 0;
}

void nestif()
{
    
    
}

void nestedfor()
{
    for (int i=1;i<=5;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void nestfor()                                                                                                                                                                                                                      
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}