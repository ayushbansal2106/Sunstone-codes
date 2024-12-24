#include<stdio.h>
int main()
{
	int overtime, bonus, wt;
	
	for(int i = 1; i <= 10; i++)
	{
	printf("\nEnter the value of employees =",i);
    scanf("%d",&wt);
    if (wt > 40)
    {
        overtime = wt - 40;
        bonus = overtime * 12;
        printf("Bonus for extra %d hours is %d.\n", overtime, bonus);
        
	}
	else 
    {
		printf("No Overtime");
	}
    }
}
