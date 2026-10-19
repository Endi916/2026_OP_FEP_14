#include <stdio.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double a, b, c;

    printf("Введіть довжини трьох сторін трикутника: ");
    if (scanf_s("%lf %lf %lf", &a, &b, &c) != 3 || a <= 0 || b <= 0 || c <= 0) {
        printf("Cторони повинні бути додатними числами!\n");
        return 1;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Трикутник із такими сторонами не існує!\n");
        return 0;
    }

    printf("\n--- Результат аналізу ---\n");

    if (a == b && b == c) {
        printf("Вид за сторонами: Рівносторонній!\n");
    }
    else if (a == b || a == c || b == c) {
        printf("Вид за сторонами: Рівнобедрений!\n");
    }
    else {
        printf("Вид за сторонами: Різносторонній!\n");
    }

    double max = a, x = b, y = c;
    if (b > max) { max = b; x = a; y = c; }
    if (c > max) { max = c; x = a; y = b; }

    double max_sq = max * max;
    double sum_sq = x * x + y * y;

    if (max_sq == sum_sq) {
        printf("Вид за кутами: Прямокутний\n");
    }
    else if (max_sq < sum_sq) {
        printf("Вид за кутами: Гострокутний\n");
    }
    else {
        printf("Вид за кутами: Тупокутний\n");
    }

    return 0;
}