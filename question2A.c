#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel using the conditional operator
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
     ? printf("The character is a vowel.\n") : printf("The character is a consonant.\n");

    return 0;
}