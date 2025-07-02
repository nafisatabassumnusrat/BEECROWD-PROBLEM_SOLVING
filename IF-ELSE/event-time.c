#include <stdio.h>

int main() {
    int start_day, end_day;
    int start_h, start_m, start_s;
    int end_h, end_m, end_s;
    int total_start_seconds, total_end_seconds, diff_seconds;
    int days, hours, minutes, seconds;

    // Read start day
    scanf("Dia %d", &start_day);
    // Read start time (hour : minute : second)
    scanf("%d : %d : %d", &start_h, &start_m, &start_s);

    // Read end day
    scanf("Dia %d", &end_day);
    // Read end time (hour : minute : second)
    scanf("%d : %d : %d", &end_h, &end_m, &end_s);

    // Convert start and end times to total seconds from day 0 00:00:00
    total_start_seconds = (start_day * 24 * 3600) + (start_h * 3600) + (start_m * 60) + start_s;
    total_end_seconds = (end_day * 24 * 3600) + (end_h * 3600) + (end_m * 60) + end_s;

    // Calculate difference in seconds
    diff_seconds = total_end_seconds - total_start_seconds;

    // Convert back to days, hours, minutes, seconds
    days = diff_seconds / (24 * 3600);
    diff_seconds %= (24 * 3600);

    hours = diff_seconds / 3600;
    diff_seconds %= 3600;

    minutes = diff_seconds / 60;
    seconds = diff_seconds % 60;

    // Print output
    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}
