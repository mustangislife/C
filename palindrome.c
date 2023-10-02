// Palindrome Program in C Using While Loop
#include <stdio.h>
int main(void)
{
    int num, rev = 0, rem; // number, reversed number variable and remainder respectively.
    int copy;              // for storing a copy of entered number.

    printf("Enter the number: ");
    scanf("%d", &num);

    copy = num;

    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (copy == rev) // we used copy because 'num' is now zero.
    {
        printf("%d is a palindrome.\n", copy);
    }

    else
    {
        printf("%d is not a palindrome.\n", copy);
    }

    return 0;
}
