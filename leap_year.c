// Leap Year Program in C with Logic, Explanation and Output
#include <stdio.h>
int main(void)
{
    int year;

    // explanation of a leap year
    printf("A leap year is a year which is evenly divisible by 4.\n");

    // logic part : start
  
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        // 'nested if' to check whether the number is evenly divisible by 100 or not.

        // if the year is not evenly divisible by 100, then it is a leap year.
        if (year % 100 != 0)
        {
            printf("%d is a leap year.\n", year);
        }

        // if the year is divisible by 100, then we have to perform one more calculation.
        else if (year % 100 == 0)
        {
            // 'if' block inside 'else if' to check whether the number is evenly divisible by 400 or not.

            // if the year is evenly divisible by 400, then it is a leap year.
            if (year % 400 == 0)
            {
                printf("%d is a leap year.\n", year);
            }

            // if the year is not divisible by 400, then it is not a leap year.
            else
            {
                printf("%d is not a leap year.\n", year);
            }
        }
    }

    // if the year is not evenly divisible by 4, then it is not a leap year.
    else
    {
        printf("%d is not a leap year.\n", year);
    }
  
    // logic part : end

    return 0;
}
