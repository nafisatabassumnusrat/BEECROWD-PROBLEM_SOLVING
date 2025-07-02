#include <stdio.h>

int main() {
    double salary, new_salary, increase;
    int percentage;

    // ইনপুট নেওয়া
    scanf("%lf", &salary);

    // রেট নির্ধারণ
    if (salary >= 0 && salary <= 400.00) {
        percentage = 15;
    } else if (salary <= 800.00) {
        percentage = 12;
    } else if (salary <= 1200.00) {
        percentage = 10;
    } else if (salary <= 2000.00) {
        percentage = 7;
    } else {
        percentage = 4;
    }

    // বেতন আপডেট
    increase = salary * percentage / 100.0;
    new_salary = salary + increase;

    // আউটপুট
    printf("Novo salario: %.2lf\n", new_salary);
    printf("Reajuste ganho: %.2lf\n", increase);
    printf("Em percentual: %d %%\n", percentage);

    return 0;
}
