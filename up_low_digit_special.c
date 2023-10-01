// C Program to Check Uppercase or Lowercase or Digit or Special Character
#include <stdio.h>
int main(void)
{
    char c; // character

    printf("Enter the character: ");
    scanf("%c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        if (c >= 'A' && c <= 'Z')
        {
            printf("%c is an uppercase letter.\n", c);
        }

        else
        {
            printf("%c is a lowercase letter.\n", c);
        }
    }

    else if (c >= 0 && c <= 9)
    {
        printf("%c is a digit.\n", c);
    }

    else
    {
        printf("%c is a special character.\n", c);
    }

    return 0;
}
