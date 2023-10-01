// Calculate the Factorial of a Given Number
#include <stdio.h>
int main(void)
{
    int i, n, fact = 1;

    printf("Enter your number : ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of the number is : %d\n", fact);

    return 0;
}
