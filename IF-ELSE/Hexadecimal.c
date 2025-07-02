#include <stdio.h>

int main() {
    unsigned int V;
    char hex[20];  // Hexadecimal সংখ্যা রাখার জন্য স্ট্রিং
    int i = 0;

    scanf("%u", &V);

    // যদি V=0 হয়, সরাসরি '0' প্রিন্ট করো
    if (V == 0) {
        printf("0\n");
        return 0;
    }

    // Decimal থেকে Hexadecimal এ কনভার্ট করো
    while (V > 0) {
        int rem = V % 16;  // ভাগশেষ
        if (rem < 10) {
            hex[i] = rem + '0';   // 0-9 সংখ্যাগুলো
        } else {
            hex[i] = rem - 10 + 'A';  // A-F অক্ষরগুলো
        }
        V = V / 16;
        i++;
    }

    // এখন hex[] এ সংখ্যাগুলো উল্টো ক্রমে আছে, সুতরাং উল্টে প্রিন্ট করো
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }
    printf("\n");

    return 0;
}
