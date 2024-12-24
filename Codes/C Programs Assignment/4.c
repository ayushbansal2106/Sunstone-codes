#include<stdio.h>
int main()
{
    int days, years, weeks, remainingDays;

    printf("Enter number of days: ");
    scanf("%d", &days);

    years = days/365;
    weeks = (days % 365) / 7;
    remainingDays = (days % 365) % 7;
    printf("Number of days : %d\n",days);
    printf("Years : %d\n",years);
    printf("Weeks : %d\n",weeks);
    printf("Days : %d\n",remainingDays);

    return 0;
}
