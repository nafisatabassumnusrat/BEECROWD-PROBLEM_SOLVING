#include <stdio.h>

int main() {
    int distance;
    float fuel, average;

    // Input: মোট কিমি এবং ফুয়েল ইনপুট নেওয়া
    scanf("%d %f", &distance, &fuel);

    // গড় খরচ হিসাব
    average = distance / fuel;

    // আউটপুট: ৩ দশমিক ঘর পর্যন্ত গড় খরচ এবং " km/l"
    printf("%.3f km/l\n", average);

    return 0;
}
