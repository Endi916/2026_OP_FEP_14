#include <stdio.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double a, b;

    printf("Введіть два числа через пробіл: ");
    if (scanf_s("%lf %lf", &a, &b) != 2) {
        printf("Помилка введення даних!\n");
        return 1;
    }

    (a == b) ? printf("Числа рівні (%.2lf = %.2lf)\n", a, b) :
        (a > b) ? printf("Перше число більше (%.2lf > %.2lf)\n", a, b) :
        printf("Друге число більше (%.2lf < %.2lf)\n", a, b);

    return 0;
}