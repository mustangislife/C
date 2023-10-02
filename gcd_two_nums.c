// Find the GCD of Two Numbers Using Loop
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

    // using Euclidean Algorithm
    while (num2 > 0)
    {
        int num_while = num2;
        num2 = num1 % num2;
        num1 = num_while;
    }

    printf("GCD of %d and %d is: %d\n", original_num1, original_num2, num1);
    /**  since 'num1' and 'num2' are no longer equal to their original values, we
         used 'original_num1' and 'original_num2' in their stead.
    **/

    return 0;
}
