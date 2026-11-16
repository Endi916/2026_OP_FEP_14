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
    int numbers[20];
    RandomNumbers(numbers, 20);
    int min = numbers[0];
    int max = numbers[0];
    int sum = 0;
    for (int i = 0; i < 20; i++){
        printf("%d ", numbers[i]);
        if (numbers[i] < min) min = numbers[i];
        if (numbers[i] > max) max = numbers[i];
        sum += numbers[i];
    }
    printf("\nMin: %d Max: %d Sum: %d", min, max, sum);
}