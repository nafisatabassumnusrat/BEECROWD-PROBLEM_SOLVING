#include <stdio.h>

int main() {
    int A, B, C, D, DIFERENCA;
    scanf("%d %d %d %d", &A, &B, &C, &D);  // চারটি সংখ্যা ইনপুট নেওয়া
    DIFERENCA = (A * B) - (C * D);        // প্রডাক্টের পার্থক্য হিসাব
    printf("DIFERENCA = %d\n", DIFERENCA); // নির্দিষ্ট ফরম্যাটে আউটপুট
    return 0;
}
