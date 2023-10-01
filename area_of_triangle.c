//C Program to Find Area of Triangle Given Base and Height
#include <stdio.h>
int main(void)
{
    float base, height;
    float area;

    printf("Enter the base of the triangle : ");
    scanf("%f", &base);

    printf("Enter the height of the triangle : ");
    scanf("%f", &height);

    area = 0.5 * base * height;
    printf("The area of the triangle is : %f\n", area);

    return 0;
}
