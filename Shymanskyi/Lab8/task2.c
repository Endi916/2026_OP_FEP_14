#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

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

int main(void) {
    srand(time(NULL));
    int arr[SIZE];
    arrCreate(arr, SIZE);
    arrPrint(arr, SIZE);
    return 0;
}