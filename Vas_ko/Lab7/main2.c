#include <stdio.h>
#include <windows.h>

int sum_recursive(int current, int max_val) {
    if (current > max_val) {
        return 0;
    }
    return current + sum_recursive(current + 1, max_val);
}

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int n = 1; 
    int limit = 100;

    int result = sum_recursive(n, limit);

    printf("Сума чисел від %d до %d дорівнює: %d\n", n, limit, result);

    return 0;
}