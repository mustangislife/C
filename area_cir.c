//C Program to Find Area and Circumference of Circle
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(void)
{
    float radius;
    float area, cir;

    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);

    //for area
    area = PI * radius * radius;
    printf("The area of the circle is : %f\n", area);

    //for circumference
    cir = 2 * PI * radius;
    printf("The circumference of the circle is : %f\n", cir);

    return 0;
}
