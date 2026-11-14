#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main(void) {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int x;
    int* p = &x;          

    printf("Введіть ціле число: ");
    scanf("%d", &x);

    printf("Значення x: %d\n", x);
    printf("Адреса x (&x): %p\n", (void*)&x);
    printf("Значення p (адреса, яку він зберігає): %p\n", (void*)p);
    printf("Значення за адресою p (*p): %d\n", *p);

    return 0;
}