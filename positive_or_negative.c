// a Check Number Is Positive or Negative
#include <stdio.h>
int main(void)
{
    float num;

    printf("Enter the number: ");
    scanf("%f", &num);

    if (num > 0)
    {
        printf("%.f is positive.\n", num);
    }

    else if (num < 0)
    {
        printf("%.f is negative.\n", num);
    }

    else
    {
        printf("Invalid input!\n");
    }

    return 0;
}
