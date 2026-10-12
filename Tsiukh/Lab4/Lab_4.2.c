#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    printf("ЗАВДАННЯ 2: ВВЕДЕННЯ ЧИСЛА ТА РОБОТА З ВКАЗІВНИКОМ\n\n");

    int variable;
    int* ptr;

    printf("Введіть ціле число: ");
    if (scanf_s("%d", &variable) != 1) {
        printf("Помилка введення даних!\n");
        return 1;
    }

    // Зв'язування вказівника з адресою змінної
    ptr = &variable;

    printf("\n--- Результати ---\n");
    printf("Значення змінної напряму (variable): %d\n", variable);
    printf("Адреса змінної через оператор (&variable): %p\n", (void*)&variable);
    printf("Значення, що зберігається у вказівнику (ptr): %p\n", (void*)ptr);
    printf("Значення змінної через розіменування вказівника (*ptr): %d\n", *ptr);

    return 0;
}