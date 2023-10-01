// Largest of Three Numbers in C Using Nested if Else
#include <stdio.h>
int main(void)
{
    int num1, num2, num3;

    printf("Enter the first natural number: ");
    scanf("%d", &num1);

    printf("Enter the second natural number: ");
    scanf("%d", &num2);

    printf("Enter the third natural number: ");
    scanf("%d", &num3);

    int greatest = num1; // assumption

    if (num2 > num1)
    {
        if (num3 > num2)
        {
            greatest = num3;
        }

        else
        {
            greatest = num2;
        }
    }

    else if (num3 > num1)
    {
        greatest = num3;
    }

    printf("%d is the greatest number.\n", greatest);

    return 0;
}
