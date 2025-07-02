#include <stdio.h>

int main() {
    double A, B, C, temp;

    // Read input
    scanf("%lf %lf %lf", &A, &B, &C);

    // Arrange in decreasing order so that A is largest
    if (B > A) { temp = A; A = B; B = temp; }
    if (C > A) { temp = A; A = C; C = temp; }
    if (C > B) { temp = B; B = C; C = temp; }

    // Check if not a triangle
    if (A >= B + C) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        double A2 = A * A;
        double B2 = B * B;
        double C2 = C * C;

        // Check triangle type by angles
        if (A2 == B2 + C2) {
            printf("TRIANGULO RETANGULO\n");
        } else if (A2 > B2 + C2) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if (A2 < B2 + C2) {
            printf("TRIANGULO ACUTANGULO\n");
        }

        // Check triangle type by sides
        if (A == B && B == C) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (A == B || B == C || A == C) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
