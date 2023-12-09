//Write a program to display the cube of the number upto given integer
#include <stdio.h>

int main() {
    int num, i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Cube of numbers up to %d:\n", num);

    for (i = 1; i <= num; i++) {
        printf("%d^3 = %d\n", i, i * i * i);
    }

    return 0;
}