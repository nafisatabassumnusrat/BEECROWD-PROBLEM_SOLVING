#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;    // Coefficients of the quadratic equation
    double delta;      // Discriminant (B^2 - 4AC)
    double R1, R2;     // Roots

    // Read the coefficients A, B, and C
    scanf("%lf %lf %lf", &A, &B, &C);

    // Calculate the discriminant
    delta = B * B - 4 * A * C;

    // Check if roots can be calculated:
    // Conditions:
    // 1) A should not be zero (otherwise division by zero)
    // 2) Discriminant must be non-negative (no sqrt of negative number)
    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n"); // Impossible to calculate roots
    } else {
        // Calculate both roots using Bhaskara's formula
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);

        // Print roots with 5 decimal places
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }

    return 0;
}
