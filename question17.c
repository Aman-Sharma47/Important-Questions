#include <stdio.h>

int main() {
    int N, K;

    printf("Enter the number N: ");
    scanf("%d", &N);

    printf("Enter the number K: ");
    scanf("%d", &K);

    if (N % K == 0) {
        printf("%d is divisible by %d.\n", N, K);
    } else {
        printf("%d is not divisible by %d.\n", N, K);
    }

    return 0;
}