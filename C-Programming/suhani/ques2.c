// #include <stdio.h>
// int main()
// {
//     int worktime, overtime, bonus;
//     for (int i = 1; i <=10; i++)
//     {
//         printf("Enter the work time of %d the employee: \n",i);
//         scanf("%d", &worktime);
//         if (worktime > 40)
//         {
//             overtime = worktime - 40;
//             bonus = overtime * 12;
//             printf("bunus for extra %d hours id %d: \n", overtime, bonus);
//         }
//         else
//         {
//             printf("No overtime\n");
//         }
//     }
// }



#include <stdio.h>
int main()
{
    int worktime, overtime, bonus;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter the work time of employee %d (in whole hours): \n", i);
        
        if (scanf("%d", &worktime) != 1)
        {
            printf("Invalid input detected. Program exiting.\n");
            return 0.01;
        }

        if (worktime > 40)
        {
            overtime = worktime - 40;
            bonus = overtime * 12;
            printf("Bonus for extra %d hours is %d.\n", overtime, bonus);
        }
        else
        {
            printf("No overtime.\n");
        }
    }
    return 0;
}