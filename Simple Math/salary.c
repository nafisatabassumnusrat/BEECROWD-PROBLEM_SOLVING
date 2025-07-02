#include <stdio.h>

int main() {
    int employee_number, worked_hours;
    float hourly_wage, salary;

    // Input: কর্মচারীর নম্বর, কাজের সময়, প্রতি ঘণ্টার মজুরি
    scanf("%d %d %f", &employee_number, &worked_hours, &hourly_wage);

    // Salary হিসাব
    salary = worked_hours * hourly_wage;

    // Output সঠিক ফরম্যাটে
    printf("NUMBER = %d\n", employee_number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
