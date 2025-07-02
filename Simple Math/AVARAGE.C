#include <stdio.h>

int main() {
    double A, B, MEDIA;

    // Input
    scanf("%lf %lf", &A, &B);

    // Weighted average calculation
    MEDIA = (A * 3.5 + B * 7.5) / 11.0;

    // Output with 5 decimal places
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
