// Write a C Program to Print the Multiplication Table of N
#include <stdio.h>
int main(void)
{
    int num; // number
    int mul; // multiplier
    int product;

    printf("Enter the natural number: ");
    scanf("%d", &num);

    printf("Enter the multiplier: ");
    scanf("%d", &mul);

    int i = 1;

    while (i <= mul)
    {
        product = num * i;
        printf("%d x %d = %d\n", num, i, product);
        i++;
    }

    return 0;
}
