
#include <stdio.h>
#include <windows.h>

int* OneElement(int arr[10], int index) {
    if (index >= 0 && index < 10) {
        return &arr[index];
    }

    return 0;
}

int* TwoElement(int arr[12][12], int row, int col) {
    if (row >= 0 && row < 12 && col >= 0 && col < 12) {
        return &arr[row][col];
    }

    return 0;
}

int main(void) {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int matrix[12][12];

    int choice, index, row, col;
    int *result;

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            matrix[i][j] = i * 12 + j;
        }
    }

    printf("Оберіть тип масиву:\n");
    printf("1. Одновимірний масив\n");
    printf("2. Двовимірний масив\n");
    printf("Ваш вибір: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Введіть індекс елемента: ");
        scanf("%d", &index);

        result = OneElement(numbers, index);
    }
    else if (choice == 2) {
        printf("Введіть номер рядка: ");
        scanf("%d", &row);

        printf("Введіть номер стовпця: ");
        scanf("%d", &col);

        result = TwoElement(matrix, row, col);
    }
    else {
        printf("Неправильний вибір!\n");
        return 0;
    }

    if (result != NULL) {
        printf("Знайдений елемент: %d\n", *result);
    }
    else {
        printf("Елемент не існує!\n");
    }

    return 0;
}
