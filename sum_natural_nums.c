// Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>
int main(void)
{
    int num, sum = 0, i = 1;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (i <= num)
    {
        sum = sum + i;
        i++;
    }

    printf("The sum of first %d natural numbers is: %d\n", num, sum);

    return 0;
}
