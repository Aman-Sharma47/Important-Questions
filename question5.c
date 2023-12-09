
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int remainder2 = number % 2;
    int remainder3 = number % 3;
    int remainder4 = number % 4;

    printf("Remainder when divided by 2: %d\n", remainder2);
    printf("Remainder when divided by 3: %d\n", remainder3);
    printf("Remainder when divided by 4: %d\n", remainder4);

    return 0;
}