// Find the Character Is Vowel or Not
#include <stdio.h>
int main(void)
{
    char alphabet;

    printf("Enter the alphabet : ");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' ||
        alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
    {
        printf("The alphabet is a vowel!\n");
    }
    else
    {
        printf("The alphabet is a consonant!\n");
    }

    return 0;
}
