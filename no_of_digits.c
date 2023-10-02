// Count the Number of Digits of an Integer Using the While Loop
#include <stdio.h>
int main(void)
{
    int num;
    int lnum;
    int digits = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    lnum = num;

    while (lnum > 0)
    {
        lnum = lnum / 10;
        digits = digits + 1;
    }

    printf("There are %d digits in %d.\n", digits, num);
    return 0;
}
