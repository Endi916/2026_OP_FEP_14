#include <stdio.h>

float Equation(float x, int N, int A){
    return N * x + A;
}

void main(){

    int N;
    int A;
    float leftBorder = -100;
    float rightBorder = 100;
    float center;
    float minInterval = 0.00001;
    printf("Enter Order index: ");
    scanf("%d", &N);
    printf("\nEnter Age: ");
    scanf("%d", &A);
    if (N != 0){
        while (rightBorder - leftBorder > minInterval){
            center = (leftBorder + rightBorder) / 2;

            if (Equation(center, N, A) == 0){
                break;
            }
            
            if (Equation(leftBorder, N, A) * Equation(center, N, A) < 0){
                rightBorder = center;
            }
            else{
                leftBorder = center;
            }
        }
        center = (leftBorder + rightBorder) / 2;
        printf("Solution: %f", center);
    }
    else{
        printf("\nno solution");
    }
}