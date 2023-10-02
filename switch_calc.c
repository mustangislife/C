// Write a C Program to Make a Simple Calculator Using Switch Case
#include <stdio.h>
int main(void)
{
    char key;         // for breaks between print functions
    float num1, num2; // entered numbers
    int op;           // operation choice

    printf("Heya! It's me! Mr. Calculator! :)\n");

    printf("Press enter to continue...\n");
    key = getchar();

    printf("I can do calculations for you! But only simple ones... hehe... :')\n");

    printf("Press enter to continue...\n");
    key = getchar();

    printf("First, give me two natural numbers.\n");

    printf("Press enter to continue...\n");
    key = getchar();

    printf("First natural number: ");
    scanf("%f", &num1);

    printf("Second natural number: ");
    scanf("%f", &num2);

    printf("Tell me what to do with them! I can perform:\n");
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");

    printf("Press the number corresponding to the operation and I will do just that!\n");
    scanf("%d", &op);

    int sum, mul, sub; // summation, multiplication and subtraction respectively
    float div;         // division

    switch (op)
    {
        case 1:
            sum = num1 + num2;
            printf("Sum of %.f and %.f is: %d\n", num1, num2, sum);
            break;

        case 2:
            sub = num1 - num2;
            printf("Subtraction of %.f and %.f gives: %d\n", num1, num2, sub);
            break;

        case 3:
            mul = num1 * num2;
            printf("Multiplication of %.f and %.f gives: %d\n", num1, num2, mul);
            break;

        case 4:
            div = num1 / num2;
            printf("Division of %.f and %.f gives: %.2f\n", num1, num2, div);
            break;

        default:
            printf("Invalid input! Please enter a number mentioned in the operations list!");
            break;
    }

    return 0;
}
