// C Program to Find Percentage of 5 Subjects
#include <stdio.h>
int main(void)
{
    printf("This program will calculate the perecentage of 5 subjects!\n");

    float a; // first subject
    float b; // second subject
    float c; // third subject
    float d; // fourth subject
    float e; // fifth subject
    float sum;
    float per; // percentage

    printf("Enter the score of first subject (out of 100) : ");
    scanf("%f", &a);

    printf("Enter the score of second subject (out of 100) : ");
    scanf("%f", &b);

    printf("Enter the score of third subject (out of 100) : ");
    scanf("%f", &c);

    printf("Enter the score of fourth subject (out of 100) : ");
    scanf("%f", &d);

    printf("Enter the score of fifth subject (out of 100) : ");
    scanf("%f", &e);

    sum = (a + b + c + d + e);
    per = sum / 5;

    printf("The percentage is : %f\n", per);

    return 0;
}
