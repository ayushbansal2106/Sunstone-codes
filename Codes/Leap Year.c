#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year.\n", year);
            }
            else
            {
                printf("%d is not a leap year.\n", year);
            }
        }
        else
        {
            printf("%d is a leap year.\n", year);
        }
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

/*
#Pseudocode
START
    READ Year
    IF year%4==0 THEN CHECK
        IF year%100!=0 THEN CHECK
            IF year%400==0 THEN
                "year is leap"
            ELSE
                "year is not leap"
            END IF
        ELSE
            "year is leap"
        END IF
    ELSE
        "year is not leap"
    END IF
END
*/

/*
Algorithm: Leap Year Check

Step 1: Input a year from the user.

Step 2: Check if the year is divisible by 4.
If yes, proceed to Step 3.
If no, proceed to Step 7.

Step 3: Check if the year is divisible by 100.
If yes, proceed to Step 4.
If no, proceed to Step 6.

Step 4: Check if the year is divisible by 400.
If yes, proceed to Step 5.
If no, proceed to Step 7.

Step 5: Print "The year is a leap year."

Step 6: Print "The year is a leap year."

Step 7: Print "The year is not a leap year."
*/