// C Program to Print Day of Week Name Using Switch Case
#include <stdio.h>
int main(void)
{
    int day;

    printf("Enter a number from 1 to 7, I will tell you the day it represents in a week!\n");
    scanf("%d", &day);

    switch (day)
    {
        case 1:
            printf("It's Monday!\n");
            break;

        case 2:
            printf("It's Tuesday!\n");
            break;

        case 3:
            printf("It's Wednesday!\n");
            break;

        case 4:
            printf("It's Thursday!\n");
            break;

        case 5:
            printf("It's Friday!\n");
            break;

        case 6:
            printf("It's Saturday!\n");
            break;

        case 7:
            printf("It's Sunday!\n");
            break;

        default:
            printf("Invalid input! Please enter a number ranging from 1 to 7!\n");
    }

    return 0;
}
