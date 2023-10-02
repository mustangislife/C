// Program to Find LCM of Two Numbers in C Using While Loop
#include <stdio.h>
int main(void)
{
    int num1, num2; // first number and second number respectively

    printf("Enter the larger of the two numbers: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int original_num1 = num1; // copy of first number
    int original_num2 = num2; // copy of second number

    while (num2 != 0)
    {
        int while_num = num2;
        num2 = num1 % num2;
        num1 = while_num;
    }

    int lcm = (original_num1 * original_num2) / num1;
    /** since we know that: LCM(x, y) * GCD(x, y) = x * y
     **/

    printf("LCM of %d and %d is equal to %d.\n", original_num1, original_num2, lcm);

    return 0;
}
