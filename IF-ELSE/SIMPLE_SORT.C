#include <stdio.h>

int main() {
    int a, b, c;
    int x, y, z;

    // Read three integers
    scanf("%d %d %d", &a, &b, &c);

    // Store original order
    x = a;
    y = b;
    z = c;

    // Sort the numbers using simple comparison swaps
    int temp;
    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    // Print sorted numbers
    printf("%d\n%d\n%d\n\n", a, b, c);

    // Print original numbers
    printf("%d\n%d\n%d\n", x, y, z);

    return 0;
}
