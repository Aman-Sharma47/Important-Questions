/*Write a program to read gender in a single character like 'M', ’m’ or 'F', ‘f’ and 
print its corresponding complete word "Male" or "Female" using a switch case statement*/
#include <stdio.h>

int main() {
    char gender;

    printf("Enter gender (M or F): ");
    scanf(" %c", &gender);

    switch (gender) {
        case 'M':
        case 'm':
            printf("Male\n");
            break;
        case 'F':
        case 'f':
            printf("Female\n");
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}