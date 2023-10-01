// C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include <stdio.h>
int main(void)
{
    int num;
    int pow1, pow2, pow3;

    printf("Enter the number: ");
    scanf("%d", &num);

    // to show the entered number
    printf("Entered number is: %d\n", num);

    pow1 = num;             // raised to the power of 1
    pow2 = num * num;       // raised to the power of 2
    pow3 = num * num * num; // raised to the power of 3

    printf("The number raised to the power of 1 is: %d\n", pow1);
    printf("The number raised to the power of 2 is: %d\n", pow2);
    printf("The number raised to the power of 3 is: %d\n", pow3);

    return 0;
}
