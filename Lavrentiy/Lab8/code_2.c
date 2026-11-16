#include <stdio.h>
#include <stdlib.h>

int* GetElement(int array[10],int i){
    return &array[i];
}

int* GetElement2(int matrix[12][12], int x, int y){
    return &matrix[x][y];
}

void main(){
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int matrix[12][12];

    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            matrix[i][j] = rand();
        }
    }

    printf("%d ", *GetElement(array, 6));
    printf("%d", *GetElement2(matrix, 5, 3));
    printf("\nactual data\n%d %d", array[6], matrix[5][3]);
}