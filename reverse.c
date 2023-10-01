// C Program to Reverse a Number Using FOR Loop
#include <stdio.h>
int main(void)
{
    int num;          // number
    int rem, rev = 0; // rem for remainder and rev for reversed number.

    printf("Enter the natural number: ");
    scanf("%d", &num);

    for (; num != 0; num = num / 10)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
    }

    printf("Reversed number is: %d\n", rev);

    return 0;
}
