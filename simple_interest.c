// Calculate a Simple Interest
#include <stdio.h>
int main(void)
{
    int p;    // principal amount
    float r;  // rate of interest
    float t;  // time
    float si; // simple interest

    printf("Enter the principal amount : ");
    scanf("%d", &p);

    printf("Enter the rate of interest : ");
    scanf("%f", &r);

    printf("Enter the time : ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    printf("The simple interest for the given data is : %f\n", si);

    return 0;
}
