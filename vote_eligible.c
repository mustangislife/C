// Checking Whether You Are Eligible for Voting or Not
#include <stdio.h>
int main(void)
{
    int age;

    printf("Elgible age for voting is 18.\n");

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Your age is %d, therefore, you are eligible to vote.\n", age);
    }

    else if (age < 18 && age > 0)
    {
        printf("Your age is %d, therefore, you are not eligible to vote.\n", age);
    }

    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
