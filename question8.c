#include <stdio.h>
#include <math.h>

int main() {
    int number, digit;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Process each digit and print its cube
    while (number > 0) {
        digit = number % 10;  // Extract the last digit
        printf("Cube of %d: %d\n", digit, (int)pow(digit, 3));
        number /= 10;  // Remove the last digit
    }

    return 0; 
}
