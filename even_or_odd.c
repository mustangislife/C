// Checking Number Is Even or Odd
#include <stdio.h>
int main(void)
{
    int num;

    printf("Enter the natural number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is even.\n", num);
    }

    else if (num % 2 != 0)
    {
        printf("%d is odd.\n", num);
    }

    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}
