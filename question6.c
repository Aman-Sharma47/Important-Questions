//C program that uses the bitwise AND operator between two numbers and displays the result:

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    int result = num1 & num2;

    printf("The result of bitwise AND between %d and %d is: %d\n", num1, num2, result);

    return 0;
}