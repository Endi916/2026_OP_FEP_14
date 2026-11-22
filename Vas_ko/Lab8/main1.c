#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int* random(void) {
    static int arr[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }

    return arr;
}

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    srand(time(0));

    int *numbers = random();

    printf("Масив з 10 випадкових чисел:\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
