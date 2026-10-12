#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    printf("ЗАВДАННЯ 3: РОЗВ'ЯЗАННЯ КВАДРАТНОГО РІВНЯННЯ\n\n");

    double a, b, c;
    double discriminant, x1, x2;
    double realPart, imagPart;

    printf("Рівняння виду: a*x^2 + b*x + c = 0\n");
    printf("Введіть коефіцієнти a, b та c через пробіл: ");

    if (scanf_s("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Помилка введення даних!\n");
        return 1;
    }

    if (a == 0) {
        printf("\nКоефіцієнт 'a' дорівнює 0. Це лінійне рівняння.\n");
        if (b != 0) {
            printf("Корінь: x = %.2f\n", -c / b);
        }
        else {
            if (c == 0) {
                printf("Рівняння має нескінченно багато розв'язків.\n");
            }
            else {
                printf("Рівняння не має розв'язків.\n");
            }
        }
        return 0;
    }

    discriminant = b * b - 4 * a * c;
    printf("\nДискримінант (D) = %.2f\n", discriminant);

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Рівняння має два дійсні корені:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if (discriminant == 0) {
        x1 = -b / (2 * a);
        printf("Рівняння має один дійсний корінь:\n");
        printf("x1 = x2 = %.2f\n", x1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Дискримінант від'ємний. Рівняння має два комплексні корені:\n");
        printf("x1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("x2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}