#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int number;
    int *ptr = NULL;

    printf("Введіть ціле число: ");
    scanf("%d", &number);
    
    ptr = &number;

    printf("Вказівник числа:\n");
    printf("Значення змінної (number):          %d\n", number);
    printf("Адреса змінної в пам'яті (&number): %p\n", (void*)&number);
    printf("Значення через вказівник (*ptr):    %d\n", *ptr);
    printf("Адреса, що зберігає ptr:            %p\n", (void*)ptr);

    return 0;
}