// Find the Greatest Among Three Numbers
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

    int greatest = num1;

    if (num2 > greatest)
    {
        greatest = num2;
    }

    if (num3 > greatest)
    {
        greatest = num3;
    }

    printf("%d is the greatest number.\n", greatest);

    return 0;
}
