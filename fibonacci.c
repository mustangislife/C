// Write a C Program to Print the Multiplication Table of N
#include <stdio.h>
int main(void)
{
    int n;              // number of terms.
    int n1 = 0, n2 = 1; // first and second terms respectively.
    int x;              // subsequent term.
    int i = 0;          // loop counter.

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacii series: %d, %d, ... upto %d terms\n", n1, n2, n);

    printf("%d, %d", n1, n2);
    do
    {
        x = n1 + n2;
        printf(", %d", x);

        n1 = n2;
        n2 = x;

        i++;
    }

    while (i < n - 2); // (n - 2) because we've already printed the first two terms.

    printf("\n");
    return 0;
}
