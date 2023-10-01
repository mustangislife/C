// Given Date Month and the Year Is Correct or Not Using If-Else
#include <stdio.h>
int main(void)
{
    printf("The date format is: Day/Month/Year.\n");

    int day, month, year;

    printf("Enter the day: ");
    scanf("%d", &day);

    printf("Enter the month: ");
    scanf("%d", &month);

    printf("Enter the year: ");
    scanf("%d", &year);

    // for checking validity of entered day.

    if (day > 31 || day <= 0)
    {
        printf("%d is not a valid day.\n", day);
    }

    else if (day > 0 && day <= 31)
    {
        printf("%d is a valid day.\n", day);
    }

    else
    {
        printf("Invalid input.\n");
    }

    // for checking entered month's validity.
  
    if (month > 0 && month <= 12)
    {
        printf("%d is a valid month.\n", month);
    }

    else if (month <= 0 || month > 12)
    {
        printf("%d is not a valid month.\n", month);
    }

    else
    {
        printf("Invalid input.\n");
    }

    // year is usually always valid.
    printf("%d is a valid year.\n", year);

    // to show the date using obtained data.
    printf("Date is: %d/%d/%d\n", day, month, year);

    return 0;
}
