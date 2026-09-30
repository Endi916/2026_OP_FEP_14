#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10
#define ROWS 12
#define COLS 12

void arrCreate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

int* arrGetElement(int arr[], int index) {
    if (index < 0 || index >= SIZE) return NULL;
    return &arr[index];
}

int* arrGetElement2D(int arr[ROWS][COLS], int row, int col) {
    if (row < 0 || row >= ROWS || col < 0 || col >= COLS) return NULL;
    return &arr[row][col];
}

int main(void) {
    srand(time(NULL));

    int arr[SIZE];
    arrCreate(arr, SIZE);

    int index1D = 4;
    int* ptr1D = arrGetElement(arr, index1D);
    if (ptr1D != NULL) {
        printf("Element at index %d: %d\n", index1D, *ptr1D);
    } else {
        printf("Error: element is empty (NULL)\n");
    }

    int arr2D[ROWS][COLS];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr2D[i][j] = rand() % 100;
        }
    }

    int i = 2, j = 5;
    int* ptr2D = arrGetElement2D(arr2D, i, j);
    if (ptr2D != NULL) {
        printf("Element [%d][%d] : %d\n", i, j, *ptr2D);
    } else {
        printf("Error element is empty\n");
    }

    return 0;
}