#include <stdio.h>

int SimpleNumber(int number)
{
    if (number < 2)
        return 0;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 0;
    }

    return 1;
}

int Sum(int number)
{
    if (number > 100)
        return 0;

    return number + Sum(number + 1);
}

float Equation(float x, int N, int A){
    return N * x + A;
}

void main(){
    int num;

    printf("Enter number: ");
    scanf("%d", &num);
    if (num < 2){
        printf("Число %d не є ні простим, ні складеним", num);
    } else{
    printf(SimpleNumber(num) ? "Число %d є простим" : "Число %d є складеним", num);
    }

    int order = 0;
    printf("\nEnter order index: ");
    scanf("%d", &order);
    printf("Sum: %d", Sum(order));

    int N = order;
    int A;
    float leftBorder = -100;
    float rightBorder = 100;
    float center;
    float minInterval = 0.00001;
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