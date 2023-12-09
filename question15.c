/*Write a C program to find the length of a string without using the 
library function. If there is a space, consider up to that particular word length*/
#include <stdio.h>

int main() {
    char str[100];
    int i, len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            break;
        }
        len++;
    }

    printf("Length of the word: %d\n", len);

    return 0;
}