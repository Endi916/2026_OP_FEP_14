#include <stdio.h>
#include <windows.h>

int main(void) {

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int n;

    do {
        printf("Введіть кількість чисел від 7 до 12: ");
        scanf("%d", &n);
        if (n < 7 || n > 12) {
            printf("Помилка! Число повинно бути в межах від 7 до 12.\n");
        }
    } while (n < 7 || n > 12);

    double num, sum, min_val, max_val;

    printf("Введіть число 1: ");
    scanf("%lf", &num);
    sum = num;
    min_val = num;
    max_val = num;

    for (int i = 2; i <= n; i++) {
        printf("Введіть число %d: ", i);
        scanf("%lf", &num);
        sum += num;

        if (num < min_val) min_val = num;
        if (num > max_val) max_val = num;
    }

    double average = sum / n;

    printf("Сума чисел: %.2lf\n", sum);
    printf("Середнє арифметичне число: %.2lf\n", average);
    printf("Мінімальне число: %.2lf\n", min_val);
    printf("Максимальне число: %.2lf\n", max_val);

    return 0;
}