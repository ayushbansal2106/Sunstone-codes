#include<stdio.h>

int main()
{
    int emp_id, Work_hr;
    float salary;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%10d",&emp_id);

    printf("Input the total working hrs of the month: ");
    scanf("%d",&Work_hr);

    printf("Salary amount/hr: ");
    scanf("%f",&salary);

    printf("Employee ID: %d\n",emp_id);
    printf("Salary = U$ %.2f", Work_hr*salary);
    return 0;

}