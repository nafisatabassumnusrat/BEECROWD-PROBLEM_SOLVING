#include <stdio.h>

int main() {
    int total_days, years, months, days;

    // Read the total number of days
    scanf("%d", &total_days);

    // Calculate years
    years = total_days / 365;

    // Calculate remaining days after years
    total_days = total_days % 365;

    // Calculate months
    months = total_days / 30;

    // Calculate remaining days
    days = total_days % 30;

    // Print results
    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}
