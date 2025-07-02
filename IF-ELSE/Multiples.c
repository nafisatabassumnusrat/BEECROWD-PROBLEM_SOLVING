#include <stdio.h>

int main() {
    int A, B;

    // Read two integers
    scanf("%d %d", &A, &B);

    // Check if they are multiples
    if (A % B == 0 || B % A == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n");
    }

    return 0;
}