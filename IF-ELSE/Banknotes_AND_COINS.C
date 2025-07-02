#include <stdio.h>
#include <math.h>

int main() {
    double N;
    int notes, coins;
    int amount;

    scanf("%lf", &N);

    // Convert to integer cents to avoid floating point issues
    amount = (int)round(N * 100);

    printf("NOTAS:\n");

    notes = amount / 10000;  // 100.00 * 100 = 10000 cents
    printf("%d nota(s) de R$ 100.00\n", notes);
    amount %= 10000;

    notes = amount / 5000;   // 50.00 * 100 = 5000 cents
    printf("%d nota(s) de R$ 50.00\n", notes);
    amount %= 5000;

    notes = amount / 2000;   // 20.00 * 100 = 2000 cents
    printf("%d nota(s) de R$ 20.00\n", notes);
    amount %= 2000;

    notes = amount / 1000;   // 10.00 * 100 = 1000 cents
    printf("%d nota(s) de R$ 10.00\n", notes);
    amount %= 1000;

    notes = amount / 500;    // 5.00 * 100 = 500 cents
    printf("%d nota(s) de R$ 5.00\n", notes);
    amount %= 500;

    notes = amount / 200;    // 2.00 * 100 = 200 cents
    printf("%d nota(s) de R$ 2.00\n", notes);
    amount %= 200;

    printf("MOEDAS:\n");

    coins = amount / 100;    // 1.00 * 100 = 100 cents
    printf("%d moeda(s) de R$ 1.00\n", coins);
    amount %= 100;

    coins = amount / 50;     // 0.50 * 100 = 50 cents
    printf("%d moeda(s) de R$ 0.50\n", coins);
    amount %= 50;

    coins = amount / 25;     // 0.25 * 100 = 25 cents
    printf("%d moeda(s) de R$ 0.25\n", coins);
    amount %= 25;

    coins = amount / 10;     // 0.10 * 100 = 10 cents
    printf("%d moeda(s) de R$ 0.10\n", coins);
    amount %= 10;

    coins = amount / 5;      // 0.05 * 100 = 5 cents
    printf("%d moeda(s) de R$ 0.05\n", coins);
    amount %= 5;

    coins = amount;          // remaining cents (0.01 * 100 = 1 cent)
    printf("%d moeda(s) de R$ 0.01\n", coins);

    return 0;
}
