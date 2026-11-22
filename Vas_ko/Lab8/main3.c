
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void minMax(int arr[20]) {
    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < 20; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Мінімальний елемент: %d\n", min);
    printf("Максимальний елемент: %d\n", max);
    printf("Їхня сума: %d\n", min + max);
}

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numbers[20];

    srand(time(0));

    printf("Масив із 20 чисел:\n");

    for (int i = 0; i < 20; i++) {
        numbers[i] = rand() % 100;
        printf("%d ", numbers[i]);
    }

    printf("\n\n");

    minMax(numbers);

    return 0;
}
