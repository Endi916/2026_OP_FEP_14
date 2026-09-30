#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE2 20

void arrCreate(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }
}

void arrPrint(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

void arrChecker(int arr[], int size) {
    if (size <= 0) return;
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    int sum = max + min;
    printf("\n");
    printf("Max : %d\n", max);
    printf("Min : %d\n", min);
    printf("Sum : %d\n", sum);
}

int main(void) {
    srand(time(NULL));
    int arr2[SIZE2];
    arrCreate(arr2, SIZE2);
    arrPrint(arr2, SIZE2);
    arrChecker(arr2, SIZE2);

    return 0;
}