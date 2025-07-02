#include <stdio.h>

int main() {
    float N1, N2, N3, N4, exam, average, final_average;

    // Read the four scores
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    // Calculate weighted average
    average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0;

    // Print average with 1 decimal place
    printf("Media: %.1f\n", average);

    // Check conditions
    if (average >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (average < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        // Student in exam
        printf("Aluno em exame.\n");
        scanf("%f", &exam);
        printf("Nota do exame: %.1f\n", exam);

        // Recalculate average with exam score
        final_average = (average + exam) / 2.0;

        if (final_average >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", final_average);
    }

    return 0;
}
