#include <stdio.h>

int main() {
    long long A, B, sum;

    // Read inputs
    scanf("%lld %lld", &A, &B);

    // Apply the formula
    long long sumB = (B * (B + 1)) / 2;
    long long sumA = ((A - 1) * A) / 2;

    sum = sumB - sumA;

    // Print the result
    printf("%lld\n", sum);

    return 0;
}
