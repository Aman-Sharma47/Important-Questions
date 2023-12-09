/* Write a c program to find the greatest of 3 numbers.(Using nested if)Get 3 integers 
from the user and compare among these integers and print the greatest integer8 */

#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        if (num1 > num3) {
            printf("%d is the greatest number.", num1);
        } else {
            printf("%d is the greatest number.", num3);
        }
    } else {
        if (num2 > num3) {
            printf("%d is the greatest number.", num2);
        } else {
            printf("%d is the greatest number.", num3);
        }
    }

    return 0;
}