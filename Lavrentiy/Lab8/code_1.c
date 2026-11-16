#include <stdio.h>
#include <stdlib.h>

void RandomNumbers(int array[], int size){
    int min = 0;
    int max = 99;
    for (int i = 0; i < size; i++){
        int randomNum = rand();
        while (randomNum < min || randomNum > max){
            randomNum = rand();
        }
        array[i] = randomNum;
    }
}

void main(){
    int numbers[10];
    RandomNumbers(numbers, 10);
    for (int i = 0; i < 10; i++){
        printf("%d ", numbers[i]);
    }
}