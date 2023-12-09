/*write a program to generate the pattern of numbers as given below
6 5 4 3 2 1 
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/
#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) {
        for (j = i; j >= 1; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}