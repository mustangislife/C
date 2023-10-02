// Program of Armstrong Number in C Using For Loop & While Loop
#include <math.h>
#include <stdio.h>
int main(void)
{
    int num, num_for, num_if; // different varaibles for storing entered number.
    int i = 0;                // incremental variable (to be used in 'while' loop)
    int rem = 0;              // variable to store remainder (to be used in 'for' loop)
    int digit_pow = 0;        // variable to add  individual digits raised to the power of number of digits.

    printf("Enter the number: ");
    scanf("%d", &num);

    num_for = num; // to be used in 'for' blcok
    num_if = num;  // to be used in 'if' block

    while (num > 0)
    {
        num = num / 10;
        i++;
    }

    for (; num_for != 0; num_for = num_for / 10)
    {
        rem = num_for % 10;
        digit_pow = digit_pow + pow(rem, i);
    }

    if (digit_pow == num_if)
    {
        printf("%d is an armstrong number.\n", num_if);
    }

    else
    {
        printf("%d is not an armstrong number.\n", num_if);
    }

    return 0;
}
