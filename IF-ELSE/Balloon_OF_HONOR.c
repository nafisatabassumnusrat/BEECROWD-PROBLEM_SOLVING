#include <stdio.h>

int main() {
    char L;
    scanf("%c", &L);

    // 'A' is ASCII 65, so position is L - 'A' + 1
    int position = L - 'A' + 1;

    printf("%d\n", position);

    return 0;
}
