#include <stdio.h>
#include <windows.h>
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int number;
    printf("Введіть число: ");
    if (scanf("%d", &number) != 1) {
        printf("Помилка введення даних!\n");
        return 1;
    }

    if (is_prime(number)) {
        printf("Число %d є простим.\n", number);
    } else {
        printf("Число %d не є простим.\n", number);
    }

    return 0;
}