#include <stdio.h>

int main() {

    int number, hours;
    float value, salary;

    scanf("%d %d %f", &number, &hours, &value);

    salary = hours * value;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}