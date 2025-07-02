#include <stdio.h>

int main() {
    int cards[5];
    int increasing = 1, decreasing = 1;

    // Read 5 cards
    for (int i = 0; i < 5; i++) {
        scanf("%d", &cards[i]);
    }

    // Check the order of the sequence
    for (int i = 1; i < 5; i++) {
        if (cards[i] > cards[i - 1]) {
            decreasing = 0;  // Not decreasing if current card is greater
        } else if (cards[i] < cards[i - 1]) {
            increasing = 0;  // Not increasing if current card is smaller
        }
    }

    // Print result based on the flags
    if (increasing) {
        printf("C\n");
    } else if (decreasing) {
        printf("D\n");
    } else {
        printf("N\n");
    }

    return 0;
}
