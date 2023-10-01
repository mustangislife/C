// Program for Finding Greater Between Two Number
#include <stdio.h>
int main(void)
{
    int num1, num2;

    printf("Enter the first natural number: ");
    scanf("%d", &num1);

    printf("Enter the second natural number: ");
    scanf("%d", &num2);

    int greater = num1;

    if (num2 > num1)
    {
        greater = num2;
        printf("%d is the greater number.\n", greater);
    }

    else
    {
        printf("%d is the greater number.\n", greater);
    }

    return 0;
}
