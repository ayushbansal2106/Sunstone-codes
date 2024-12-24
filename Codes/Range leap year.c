#include <stdio.h>
int main()
{
    int startyear, endyear;
    printf("Enter The Range of Year");
    printf("Enter the starting year: ");
    scanf("%d", &startyear);
    printf("Enter the ending year: ");
    scanf("%d", &endyear);
    int year = (endyear-startyear);
    int arrT[year]; int arrF[year];
    int indexT=0, indexF=0;
    for (int i = startyear; i <= endyear; i++)
    {
        if (i % 4 == 0)
        {
            if (i % 100 == 0)
            {
                if (i % 400 == 0)
                {
                    // printf("%d is a leap year.\n", i);
                    arrT[indexT]=i;
                    indexT++;
                }
                else
                {
                    // printf("%d is not a leap year.\n", i);
                    arrF[indexF]=i;
                    indexF++;
                }
            }
            else
            {
                // printf("%d is a leap year.\n", i);
                arrT[indexT]=i;
                    indexT++;
            }
        }
        else
        {
            // printf("%d is not a leap year.\n", i);
            arrF[indexF]=i;
            indexF++;
        }
    }
    printf("Leap Year are: \n");
    for(int i=0;i<=(year/4);i++)
    {
        printf("%d\n",arrT[i]);
    }
    printf("\nNon Leap Year are: \n");
    for(int i=0;i<=(year-(year/4));i++)
    {
        printf("%d\n",arrF[i]);
    }
    return 0;
}

/*
#Pseudocode
START
    READ startyear, endyear
    FOR i = startyear TO endyear
        IF i % 4 == 0 THEN
            IF i % 100 == 0 THEN
                IF i % 400 == 0 THEN
                    PRINT i + " is a leap year."
                ELSE
                    PRINT i + " is not a leap year."
                END IF
            ELSE
                PRINT i + " is a leap year."
            END IF
        ELSE
            PRINT i + " is not a leap year."
        END IF
    END FOR
END
*/

/*
Algorithm: Leap Year Check

Step 1: Input the start year and end year from the user.

Step 2: Initialize a loop from the start year to the end year.

Step 3: For each year in the loop, check if it is a leap year.
Check if the year is divisible by 4.
If yes, check if it is divisible by 100.
If yes, check if it is divisible by 400.
If yes, print the year as a leap year.
If no, print the year as not a leap year.
If no, print the year as a leap year.
If no, print the year as not a leap year.

Step 4: Repeat Step 3 for all years in the loop.
*/