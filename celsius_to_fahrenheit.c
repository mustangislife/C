// Convert Temperature Celsius into Fahrenheit
#include <stdio.h>
int main(void)
{
    float cel, fah; // celsius and fahrenheit respectively

    printf("Enter the temperature in Celsius : ");
    scanf("%f", &cel);

    fah = (cel * 9 / 5) + 32;

    printf("Temperature in Fahrenheit : %f\n", fah);

    return 0;
}
