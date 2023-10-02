// Print the ASCII Value of the Character
#include <stdio.h>
int main(void)
{
    char ch; // for storing entered character

    printf("Enter the character: ");
    scanf("%c", &ch);

    printf("ASCII value of '%c' is %d.\n", ch, ch);

    return 0;
}
